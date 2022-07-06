#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head == NULL || head->next == NULL)
        return head;
    LinkedListNode<int> *current = head;
    LinkedListNode<int> *after = current->next;
    LinkedListNode<int> *before = NULL;
    
    while(current)
    {
        current->next = before;
        before = current;
        current = after;
        if(after != NULL)
            after = after->next;
        else
            head = before;
    }
    return head;
}

// T.C. : O(N)
// S.C. : O(1)

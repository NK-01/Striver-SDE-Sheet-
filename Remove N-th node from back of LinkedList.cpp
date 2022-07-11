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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(head == NULL || K == 0)
        return head;
    LinkedListNode<int>* fast = head;
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* prev = NULL;
    while(--K)
        fast = fast->next;
    while(fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }
    // *********** IMP ***********
    if(prev == NULL) // if(slow == head) --> when deleting the first node
        return head->next;
    prev->next = slow->next;
    return head;
}

// T.C : O(N)
// S.C.: O(1)

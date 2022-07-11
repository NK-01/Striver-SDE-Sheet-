#include <bits/stdc++.h> 
LinkedListNode<int>* reverse(LinkedListNode<int>* );
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
//     if(head == NULL || head->next == NULL)
//         return head;
//     LinkedListNode<int> *current = head;
//     LinkedListNode<int> *after = current->next;
//     LinkedListNode<int> *before = NULL;
// ******************* APPROACH - 1.1 **********************
//     while(current)
//     {
//         current->next = before;
//         before = current;
//         current = after;
//         if(after != NULL)
//             after = after->next;
//         else
//             head = before;
//     }

// ******************* APPROACH - 1.0 *************************
//     while(current)
//     {
//         after = current->next;
//         current->next = before;
//         before = current;
//         current = after;
//     }
//     head = before;
//     return head;
    if(head == NULL)
        return head;
    return reverse(head);
}

LinkedListNode<int>* reverse(LinkedListNode<int>* ptr)
{
    LinkedListNode<int>* head = NULL;
    if(ptr->next == NULL)
    {
        head = ptr;
        return head;
    }
    head = reverse( ptr->next);
    ptr->next->next = ptr;
    ptr->next = NULL;
    return head;
}

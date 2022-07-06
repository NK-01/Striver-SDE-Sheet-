#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    
//     if(head == NULL)  --> This case is automatically handeled
//         return head;
    Node *slow = head;
    Node *fast = head;
    
    // fast == NULL --> even no. of nodes
    // fast->next == NULL --> odd no. of nodes
    
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

// T.C. : O(N)
// S.C. : O(1)

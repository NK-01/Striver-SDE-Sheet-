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

bool detectCycle(Node *head)
{
    // APP - 1
	/*
    set<Node*> map;
    Node *temp = head;
    while(temp)
    {
        if(map.find(temp) != map.end())
            return true;
        map.insert(temp);
        temp = temp->next;
    }
    return false;
    */
    
    // APP - 2 : Floyd's Cycle || Floyd's Tortoise and Hare (Space optimized)
    Node *slow = head;
    Node *fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}
// APP-1
// T.C. : O(N)
// S.C. : O(N)

// APP-2
// T.C. : O(N)
// S.C. : O(1)

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

int findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_map<Node* , int> map1;
    Node *temp = firstHead;
    while(temp)
       map1[temp] = temp->data, temp = temp->next;
    temp = secondHead;
    while(temp)
    {
        if(map1.find(temp) != map1.end())
            return map1[temp];
        temp = temp->next;
    }
    return -1;
}

// T.C : O(M + N)
// S.C : O(M) -> storing details of first linked list into the hash map


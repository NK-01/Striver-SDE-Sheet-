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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *head = NULL;
    Node *temp = NULL;
    
    // head is dummy node;
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->next = NULL;
    new_node->data = -1;
    head = new_node;
    temp = head;
    
    int num, carry = 0;
    while(head1 && head2)
    {
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->next = NULL;
        num = head1->data + head2->data + carry;
        new_node->data = num % 10;
        carry = num / 10;
        temp->next = new_node;
        temp = temp->next;
        head1 = head1->next;
        head2 = head2->next;
    }
    while(head1)
    {
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->next = NULL;
        num = head1->data + carry;
        new_node->data = num % 10;
        carry = num / 10;
        temp->next = new_node;
        temp = temp->next;
        head1 = head1->next;
    }
    while(head2)
    {
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->next = NULL;
        num = head2->data + carry;
        new_node->data = num % 10;
        carry = num / 10;
        temp->next = new_node;
        temp = temp->next;
        head2 = head2->next;
    }
    // if carry remains at last after adding all nodes
    if(carry)
    {
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->next = NULL;
        new_node->data = carry;
        temp->next = new_node;
    }
    return head->next;
}

// T.C : O(max(N+ M)
// S.C : O (max (N + M))

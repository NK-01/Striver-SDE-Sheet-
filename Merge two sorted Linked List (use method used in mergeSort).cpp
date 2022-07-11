Node<int>* merge_LL(Node<int>*, Node<int>*);
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // APPROACH - 1 using extra space
/*   if(first == NULL)
        return second;
    if(second == NULL)
        return first;
    Node<int>* temp = NULL;
    Node<int>* result = NULL;
    Node<int>* new_node = (Node<int>*)malloc(sizeof(Node<int>));
    new_node->next = NULL;
    new_node->data = -1;
    result = new_node;
    //inserting first element --> if not using dummy list
    
//     if(second->data > first->data)
//     {
//         Node<int>* new_node = (Node<int>*)malloc(sizeof(Node<int>));
//         new_node->next = NULL;
//         new_node->data = first->data;
//         result = new_node;
//         first = first->next;
//     }
//     else
//     {
//         Node<int>* new_node = (Node<int>*)malloc(sizeof(Node<int>));
//         new_node->next = NULL;
//         new_node->data = second->data;
//         result = new_node;
//         second = second->next;
//     }
    temp = result;
    while(first && second)
    {
        Node<int>* new_node = (Node<int>*)malloc(sizeof(Node<int>));
        new_node->next = NULL;
        if(second->data > first->data)
        {
            new_node->data = first->data;
            temp->next = new_node;
            temp = temp->next;
            first = first->next;
        }
        else
        {
            new_node->data = second->data;
            temp->next = new_node;
            temp = temp->next;
            second = second->next;
        }
    }
    while(first)
    {
        Node<int>* new_node = (Node<int>*)malloc(sizeof(Node<int>));
        new_node->next = NULL;
        new_node->data = first->data;
        temp->next = new_node;
        temp = temp->next;
        first = first->next;
    }
    while(second)
    {
        Node<int>* new_node = (Node<int>*)malloc(sizeof(Node<int>));
        new_node->next = NULL;
        new_node->data = second->data;
        temp->next = new_node;
        temp = temp->next;
        second = second->next;
    }
    return result->next;

// APPROACH - 1
// T.C.: O (N+M)
// S.C. : O (N+M)
   
   */
    
    //APPROACH - 2
    if(first == NULL)
        return second;
    if(second == NULL)
        return first;
    if(first->data > second->data)
        return merge_LL(first , second);
    return merge_LL(second, first);
}
Node<int>* merge_LL(Node<int>* l1, Node<int>* l2) // l1 ->larger, l2-> smaller
{
    Node<int>* result = l2;
    Node<int>* prev = NULL;
    while(l1 && l2)
    {
        if(l2->data > l1->data)
        {
            prev->next = l1;
            l1 = l1->next;
            prev->next->next = l2;
            prev = prev->next;
        }
        else
        {
            prev = l2;
            l2 = l2->next;
        }
    }
    if(l1)
        prev->next = l1;
    return result;
}
// APPROACH - 2
// T.C.: O (N+M)
// S.C. : O (1)

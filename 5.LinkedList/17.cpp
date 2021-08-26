/*Split a Circular Linked List into two halves */

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    
    if(!head) return;
    Node *slow=head,*fast=head;
    while(fast->next->next!=head && fast->next!=head)
    {
            slow=slow->next;
            fast=fast->next->next;
    }
    /* If there are even elements in list
       then move fast_ptr */
    if(fast->next->next == head)
        fast = fast->next;
   /* Set the head pointer of first half */
    *head1_ref = head;
         
    /* Set the head pointer of second half */
    if(head->next != head)
        *head2_ref = slow->next;
         
    /* Make second half circular */
    fast->next = slow->next;
         
    /* Make first half circular */
    slow->next = head;
    
}
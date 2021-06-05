// To get the Staring Point of a Loop in the linkedlist


Node* removeLoop(Node* head)
    {
        if(head==NULL || head->next==NULL) return ; // if LL is empty  no loop
        Node *slow=head,*fast=head;
        slow=slow->next;
        fast=fast->next->next;
        while(fast&&fast->next)
        {
            if(slow==fast)  //find the 1st meeting point
                break;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow!=fast) return; // if no loop (no meeting point)

        slow=head;
        while(slow!=fast) //fing the staring point of the Loop
        {
            slow=slow->next;
            fast=fast->next;
        }
       return slow;
    }
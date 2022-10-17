ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        
        while(head!=NULL)
        {
            bool f=false;
            while(head->next!=NULL && head->val==head->next->val){
                head=head->next;
                f=true;
            }                
            if(!f){
                temp->next=new ListNode(head->val);
                temp=temp->next;
            }
            head=head->next;
        }
        return ans->next;
    }

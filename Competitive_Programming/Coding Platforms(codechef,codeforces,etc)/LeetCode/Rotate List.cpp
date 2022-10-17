class Solution {
public:
    int  length(ListNode*head){
        int count=0;
        while(head!=NULL) {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int n=length(head);
        if(n==0) return head;
        k=k%n;
        if(k==0) return head;
        ListNode*temp=head;
        ListNode*end=head;
        int count=1;
        while(count!=n){
            if(count<n-k)
            temp=temp->next;
            end=end->next;
            count++;
        }
        end->next=head;
        ListNode*newhead=temp->next;
        temp->next=NULL;
        return newhead;
    }
};

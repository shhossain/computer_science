class Solution {
public:
    int getDecimalValue(ListNode* head) {
        long long int res=0;
        while(head!=NULL){
            res=res*2+head->val;
            head=head->next;
        }
        return res;
    }
};

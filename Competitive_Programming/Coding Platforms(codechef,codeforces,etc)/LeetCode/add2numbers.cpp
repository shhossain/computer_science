/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy=new ListNode();
    ListNode* temp=dummy;
    int sum=0;
	
    while(l1||l2||sum){
        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }
        int remainder=sum%10;
        sum=floor(sum/10);
        temp->next=new ListNode(remainder);
        temp=temp->next;
    }
    return dummy->next;
    }
};
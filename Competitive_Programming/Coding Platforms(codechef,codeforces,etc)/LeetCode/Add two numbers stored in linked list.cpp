/******************************************************
 * Problem:Add the two numbers stored in linked list and return the sum as a linked list.
 * URL :  https://leetcode.com/problems/add-two-numbers/
 * *****************************************************/

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
        int carry=0;
        ListNode *w = new ListNode();
        ListNode *z = new ListNode();
        z->val=(l1->val+l2->val)%10;
        carry=(l1->val+l2->val)/10;
        l2=l2->next;
        l1=l1->next;
        w=z;
        while(true){
            if(l1 == nullptr && l2 == nullptr){
                if(carry!=0){
                    ListNode *t = new ListNode();
                    t->val=carry;
                    carry=0;
                    z->next = t;
                    z = z->next;
                }
                break;
            }
            else if(l1 == nullptr){
                while(l2 != nullptr){
                    ListNode *p = new ListNode();
                    p->val=(carry+l2->val)%10;
                    carry=(carry+l2->val)/10;
                    z->next = p;
                    z = z->next;
                    l2=l2->next;
                }
            }
            else if(l2 == nullptr){
                while(l1 != nullptr){
                    ListNode *p = new ListNode();
                    p->val=(carry+l1->val)%10;
                    carry=(carry+l1->val)/10;
                    z->next = p;
                    z = z->next;
                    l1=l1->next;
                }
            }
            else{
                ListNode *t = new ListNode();
                t->val=(carry+l1->val+l2->val)%10;
                carry=(carry+l1->val+l2->val)/10;
                z->next = t;
                z = z->next;
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        return w;
    }
};
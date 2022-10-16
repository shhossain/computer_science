class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
        if (l1 == NULL && l2 == NULL && carry == 0)   return NULL;
        
        int n1 = l1 == NULL ? 0 : l1->val;
        int n2 = l2 == NULL ? 0 : l2->val;
        
        ListNode* node = new ListNode((n1 + n2 + carry) % 10);
        carry = (n1 + n2 + carry) / 10;
        node->next = addTwoNumbers(l1 ? l1->next : NULL, l2 ? l2->next : NULL, carry);
        return node;
    }
};

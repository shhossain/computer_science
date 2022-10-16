class Solution {
public:
    ListNode* sortList(ListNode* head) {
		if(!head || !head->next) return head;
		ListNode *slow = head, *fast = head->next;
		while(fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		ListNode *second = slow->next;
		slow->next = NULL;
	
		ListNode *l1 = sortList(head);
		ListNode *l2 = sortList(second);
		
		return merge(l1, l2);
	}
	ListNode* merge(ListNode *left, ListNode *right) {
		ListNode *cur = nullptr;
		if(!left) return right;
		if(!right) return left;
		if(left->val < right->val) {
			cur = left;
			cur->next = merge(left->next, right);
		} else {
			cur = right;
			cur->next = merge(left, right->next);
		}
		return cur;
	}
};

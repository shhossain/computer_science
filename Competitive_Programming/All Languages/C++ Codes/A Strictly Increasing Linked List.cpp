bool solve(LLNode* head) {
    LLNode* one = head->next;
    LLNode* two = head;
    while (one) {
        if(one->val <= two->val) {
            return false;
        }
        one = one->next;
        two = two->next;
    }
    return true;
}

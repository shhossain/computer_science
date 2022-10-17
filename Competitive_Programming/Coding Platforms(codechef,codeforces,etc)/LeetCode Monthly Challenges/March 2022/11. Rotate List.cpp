class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return head;
        int size = 1;
        ListNode* tmp = head;
        while(tmp->next){
            tmp = tmp->next;
            size++;
        }
        k = size - k % size;
        tmp->next = head;
        while(k--)tmp = tmp->next;
        head = tmp->next;
        tmp->next = NULL;
        return head;
    }
};

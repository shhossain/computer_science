class Solution {
public:
    vector<int> v;
	int n;
    Solution(ListNode* head) {
        ListNode* cur = head;
        while(cur){
            v.push_back(cur->val);
            cur=cur->next;
        }
		n=v.size();
    }
    
    int getRandom() {
        return v[rand()%n];
    }
};

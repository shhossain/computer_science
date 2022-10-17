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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* root = new ListNode(0);
        ListNode* k = root;
        while(1){
            int mx = INT_MAX;
            int idx;
            int em=0;
            for(int i=0;i<lists.size();i++){
                if(lists[i]){
                    if(mx>lists[i]->val){
                        idx = i;
                        mx = lists[i]->val;
                    }
                }
                else{
                    em++;
                }
            }
            if(em==lists.size())    break;
            if(root==nullptr)   root = new ListNode(mx);
            else{
                root->next = new ListNode(mx);
                root = root->next;
            }
            
            lists[idx] = lists[idx]->next;
        }
        return k->next;
    }
};

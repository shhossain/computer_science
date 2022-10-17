class Solution {
public:
    int ans = 0;
    
    void search(TreeNode* node, int pre=0) {    
        if (!node->left and !node->right) 
           
            this->ans += pre * 2 + node->val;
        if (node->left) 
            search(node->left, pre * 2 + node->val);
        if (node->right)
            search(node->right, pre * 2 + node->val);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        search(root);
        return this->ans;
    }
};

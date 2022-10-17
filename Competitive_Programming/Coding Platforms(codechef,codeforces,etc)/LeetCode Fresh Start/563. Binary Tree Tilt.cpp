class Solution {
public:
    int sum(TreeNode *root,int &tilt){
        if(!root)   
            return 0;
        int left = sum(root->left,tilt);
        int right = sum(root->right,tilt);
        tilt += abs(left-right);
        return (left+right+root->val);
    }
    int findTilt(TreeNode* root) {
        int tilt=0;
        sum(root,tilt);
        return tilt;
    }
};

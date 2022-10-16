int widthOfBinaryTree(TreeNode* root) {
	if (!root)return 0;
	queue<pair<TreeNode*, unsigned long long int>> que;
	que.push({root, 0});
	int width = 0;
	while (que.size() != 0) {
		unsigned long long int left = que.front().second, right = 0;
		int size = que.size();
		while (size-- > 0) {
			pair<TreeNode*, unsigned long long int> rNode = que.front();
			que.pop();
			right = rNode.second;
			if (rNode.first->left) {
				que.push({rNode.first->left, 2 * rNode.second + 1});
			}
			if (rNode.first->right) {
				que.push({rNode.first->right, 2 * rNode.second + 2});
			}
		}
		width = max(width, int(right - left + 1));
	}
	return width;
}

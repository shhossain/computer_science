bool solve(Tree* root, int t) {
    stack<int> s;

    if (t == 0) return false;
    while (t != 0) {
        s.push(t);
        t /= 2;
    }

    while (!s.empty()) {
        if (root == NULL || root->val != s.top()) return false;
        s.pop();
        if (s.size() > 0) {
            if (s.top() % 2) {
                root = root->right;
            } else
                root = root->left;
        }
    }
    return true;
}

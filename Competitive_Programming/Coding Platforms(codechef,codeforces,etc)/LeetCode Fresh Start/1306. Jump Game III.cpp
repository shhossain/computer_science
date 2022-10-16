class Solution {
public:
     bool canReach(vector<int>& A, int i) {
        return 0 <= i && i < A.size() && A[i] >= 0 && (!(A[i] = -A[i]) || canReach(A, i + A[i]) || canReach(A, i - A[i]));
    }
};

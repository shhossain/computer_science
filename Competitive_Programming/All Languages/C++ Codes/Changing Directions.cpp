int solve(vector<int>& A) {
    int res = 0;
    for (int i = 1; i < (int)(A.size()) - 1; i++) {
        if (A[i] > A[i - 1] && A[i] > A[i + 1]) {
            res++;
        }

        if (A[i] < A[i - 1] && A[i] < A[i + 1]) {
            res++;
        }
    }
    return res;
}

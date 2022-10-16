int solve(vector<int>& A, vector<int>& B) {
    if (max(A.size(), B.size()) > 6 * min(A.size(), B.size())) 
    return -1;
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int sum1 = 0, sum2 = 0;

    for (int i : A) sum1 += i;
    for (int i : B) sum2 += i;

    if (sum1 > sum2) return solve(B, A);

    
    reverse(B.begin(), B.end());
    int i = 0, j = 0;
    int res = 0;

    int dif = sum2 - sum1;
    while (dif > 0) {
        res++;
        if (i < A.size() && j < B.size()) {
            int a = 6 - A[i];
            int b = B[j] - 1;
            if (a > b) {
                dif -= a;
                i++;
            } 
            else {
                dif -= b;
                j++;
            }
        } 
        else {
            if (i < A.size()) {
                dif -= (6 - A[i++]);
            } 
            else if (j < B.size()) {
                dif -= (B[j++] - 1);
            }
        }
    }
    return res;
}

#include <bits/stdc++.h>
using namespace std;

//Computing a to the power b using Binary Exponentiation

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main()
{
    long long a, b, ans;
    cin >> a >> b;
    ans = binpow(a, b); // 2 ^ 3 = 8
    cout << ans << endl;
    return 0;
}
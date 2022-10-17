#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i + 1 < n; i++) {
        if (a[i - 1] < a[i] and a[i] > a[i + 1]) {
            cout << "YES" << "\n";
            cout << i << ' ' << i + 1 << ' ' << i + 2 << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
}
 
int main() {
    int t; cin >> t;
    while (t--) solve();
}
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number of
// increments/decrements operations required
// to make both the numbers non-coprime
int makeCoprime(int a, int b)
{
    // If a & b are already non-coprimes
    if (__gcd(a, b) != 1)
        return 0;

    // If a & b can become non-coprimes
    // by only incrementing/decrementing
    // a number only once
    if (__gcd(a + 1, b) != 1
            or __gcd(a + 1, b) != 1
            or __gcd(b + 1, a) != 1
            or __gcd(b + 1, a) != 1)
        return 1;

    // Otherwise
    return 2;
}

// Driver Code
int main()
{
    int t ;  cin >> t ;
    while (t--) {
        int A = 7, B = 17;
        cin >> A >> B ;
        cout << makeCoprime(A, B) << endl;
    }

    return 0;
}

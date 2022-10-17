#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define mx 90000001
 
using namespace std;
 
bool check(ll n, ll pos) {
	return (bool)(n & (1 << pos));
}
 
ll Set(ll n, ll pos) {
	return n | (1 << pos);
}
 
ll status[(mx / 32) + 1];
 
vector <ll> primes;
 
void siv() {
	ll n = 90000001;
	ll sq = int(sqrt(mx));
	
	primes.pb(2);
 
	for(ll i = 3; i <= sq; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			for(ll j = (i * i); j <= n; j += (i * 2)) {
				status[j / 32] = Set(status[j / 32], j % 32);
			}
		}
	}
 
	for(ll i = 3; i <= n; i += 2) {
		if(check(status[i / 32], i % 32) == 0) {
			primes.pb(i);
		}
	}
}
 
void init()
{
	siv();
 
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		cout << primes[n - 1] << '\n';
	}
}
int main()
{		 
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		 
	init();
		 
	return 0;
}
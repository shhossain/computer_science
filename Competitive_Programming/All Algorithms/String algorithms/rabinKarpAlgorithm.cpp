//Coded By Vishal Mourya
#include<bits/stdc++.h>
#define ll long long int
#define vec vector<ll>
#define f(var,a,b) for(ll var = a ; var < b ; var++ )
#define fr(var,a,b) for(ll var = a ; var > b ; var-- )
#define fasthoja ios_base::sync_with_stdio(false); cin.tie(NULL);
#define prime 31
using namespace std;

ll createHashValue(string str, ll n ) {
    ll result = 0;
    f(i,0,n) {
        result += (ll)( str[i] * (ll)pow(prime, i) );
    }
    return result;
}

ll recalculateHash(string str, ll oldIndex , ll newIndex , ll oldHash , ll patLength ) {
    ll newHash = oldHash - str[oldIndex];
    newHash /= prime;
    newHash += (ll)( str[newIndex] * (ll)(pow(prime , patLength-1)) );
    return newHash;
}

bool checkEqual( string str1 , string str2 , ll start1 , ll end1 , ll start2, ll end2  ) {
    if( (end1-start1) != (end2-start2) ) {
        return false;
    }

    while( start1 <= end1 && start2 <= end2 ) {
        if( str1[start1] != str2[start2] ) 
            return false;

        start1++; start2++;
    }
    return true;
}

int main(void){
    fasthoja;
    ll t = 2; 
    // cin>>t;
    while(t--){
        string str = "ababcabdab";
        string pat = "abd";
        // string str; cin >> str;
        // string pat; cin >> pat;

        ll patHash = createHashValue(pat, pat.length());
        ll strHash = createHashValue(str, pat.length());

        for( ll i = 0 ; i <= str.length()-pat.length() ; i++ ) {
            if( patHash == strHash && checkEqual(str, pat, i , i+pat.length()-1, 0 , pat.length()-1) ) {
                cout << i << "\n";
                return 0;
            }   
            if( i < str.length()-pat.length() ) {
                strHash = recalculateHash(str, i , i+pat.length() , strHash , pat.length());
            }
        }
    }//end of test case loop
    return 0;
}

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int B[n];
        for(int i=0;i<n;i++){
            cin>>B[i];
            //B[i]=A[i];
        }
        
        //sort(A,A+n);
        /*
        int count = 0;
        for(int i=0;i<n;i++){
            if(B[i]!=A[i]){
                count++;
            }
        }
        */
        //cout<<"count = ";
        //cout<<count<<endl;
        vector< pair<int,int> > p;
        int counter = 0;
        for(int i=n-1;i>=0;i--){
            int maxi = INT_MIN;
            int index = -1;

            for(int j=0;j<=i;j++){
                if(B[j]>maxi){
                    maxi = B[j];
                    index = j;
                }
            }
            /*
            if(index == i){
                continue;
            }
``
            else 
            */
            if(B[i]!=maxi){
                //auto it = lower_bound(A,A+n,B[i]);
                //cout<<it-A+1<<" "<<i+1<<" "<<1<<endl;
                //cout<<i+1<<" "<<it-A+1<<" "<<1<<endl;
                p.push_back({index+1,i+1});
                //cout<<i+1<<" "<<cout<<it-A+1<<" "<<1<<endl;
                int temp = B[index];
                for(int j=index;j<i;j++){
                    B[j]=B[j+1];
                }
                B[i]=temp;
                //A[it-A]=A[i]
                //shifti(B[i],B[it-A]);
                //B[it-A]=temp;
                //swap(B[i],B[])
                //i--;
                counter++;
            }
        }
        cout<<counter<<endl;
        for(auto ele : p){
            cout<<ele.first<<" "<<ele.second<<" "<<1<<endl;
        }
        /*
        int ct = 0;
        for(int i=1;i<n;i++){
            if(B[i-1]>B[i]){
                cout<<i-1+1<<" "<<i+1<<" "<<1<<endl;
                swap(B[i],B[i-1]);
                ct++;
            }
        }
        cout<<"ct = "<<ct<<endl;
        
        for(int i=0;i<n;i++){
            cout<<B[i]<<" ";
        }

        cout<<endl;
        */
        
        
    }
}
 

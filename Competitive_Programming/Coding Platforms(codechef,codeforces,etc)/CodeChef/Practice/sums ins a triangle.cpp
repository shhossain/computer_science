#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t,n;
    
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<i+1;j++){
                arr[i][j]+=max(arr[i+1][j],arr[i+1][j+1]);
            }
        }
        cout<<arr[0][0]<<endl;
    }
}

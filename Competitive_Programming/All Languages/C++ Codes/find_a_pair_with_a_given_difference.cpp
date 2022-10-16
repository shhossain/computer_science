#include<bits/stdc++.h>
using namespace std;

void Method1(int arr[], int size, int n){

    int ans = -1;

    for(int i=0;i<size;i++){
        int y = arr[i]+n;
        for(int j=0;j<size;j++){
            if(arr[j]==y){
                ans=1;
                break;
            }
        }
    }
    cout<<ans;
}

void Method2(int arr[], int size, int n){

    map<int, int>m;

    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }

    int ans=-1;

    for(int i=0;i<size;i++){
        int y = arr[i]+n;

        if(m[y]){
            ans=1;
            break;
        }
    }
    cout<<"\n"<<ans;
}

bool Method3(int arr[], int size, int n){

    sort(arr, arr+size);

    int i=0,j=1;

    while(i<size && j<size){
        if(i!=j && arr[j]-arr[i]==n){
            cout<<"\n1";
            return true;
        }else if(arr[j]-arr[i]<n){
            j++;
        }else {
            i++;
        }
    }
    return false;
}

int main(){


    int arr[] = {5, 20, 3, 2, 5, 80};
    int size = sizeof(arr)/sizeof(arr[0]);

    Method1(arr, size, 78);
    Method2(arr, size, 78);
    Method3(arr, size, 78);

    return 0;
}

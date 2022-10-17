# include <iostream>
using namespace std;

int main(){

    int n ;
    cin >> n;

    bool check[n + 1] = {0};

    for(int i = 2; i <= n; i++){
        for(int j = i * i; j <= n; j += i)
            check[j] = true;
    }

    for(int i = 2; i <= n; i++){
        if(!check[i])
            cout << i << " ";
    }

    cout << endl;

    return 0;
}
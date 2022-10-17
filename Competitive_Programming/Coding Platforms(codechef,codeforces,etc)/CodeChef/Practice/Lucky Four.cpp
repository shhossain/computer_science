#include <iostream>
using namespace std;

int main() {
    int sizeArr;
    cin >> sizeArr;

    int digi, num;
    while(sizeArr--){
        scanf("%d", &num);
        digi = 0;
        while(num>0){
            if(num%10==4){
                digi++;
            }
            num /= 10;
        }
        cout << digi << endl;
    }
}

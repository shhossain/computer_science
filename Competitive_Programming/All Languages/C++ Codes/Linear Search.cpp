#include <iostream>
using namespace std;

void linearSearch(int a[], int n) {
  bool temp = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] == n){
        cout << "Element found at position: " << i + 1 << endl;
        temp = 0;
        break;
    }
  }
  if (temp == -1)
    cout << "Element not Found" << endl;
}
 
int main() {
  int n,num;
  cout << "Please enter the size of Array" << endl;
  cin>>n;
  int*arr=new int(n);
  cout << "Please enter "<<n<<" elements of the Array" << endl;
  for (int i = 0; i < n; i++) 
    cin >> arr[i];
  cout << "Please enter an element to search" << endl;
  cin >> num;
  linearSearch(arr, num);
  return 0;
}

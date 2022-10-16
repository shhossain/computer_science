#include<iostream>
#include<string>
using namespace std;
 
int main() {
 int participant[50];
 int n, k, k_th;
 int count = 0;
 
 cin >> n >> k;
 
 for (int i = 0; i < n; i++) {
  cin >> participant[i];
  if (i + 1 == k)
   k_th = participant[i];
 }
 for (int i = 0; i < n; i++) {
  if (participant[i] >= k_th && participant[i]>0) {
   count++;
  }
 }
 cout << count << endl;
}

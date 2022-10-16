#include<bits/stdc++.h>
using namespace std;
int main(){
 char x;
  cout<<"Enter a Character: ";
  cin>>x;
 bool upper,lower;
  upper = (x=='A' || x=='E' ||x=='I' ||x=='O' ||x=='U');
  lower = (x=='a' || x=='e' ||x=='i' ||x=='o' ||x=='u');
 
 if(!isalpha(x))
    cout<<"Not a Character";
 else if(upper || lower)
    cout<<"Vowel";
 else
    cout<<"Consonant";
}

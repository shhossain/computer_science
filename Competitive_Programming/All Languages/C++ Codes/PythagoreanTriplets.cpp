#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;


struct triplet{
int a,b,c;
};

int countTriplets(int n){
int ans=0;
stack<struct triplet> s;
struct triplet temp;
temp.a=3;
temp.b=4;
temp.c=5;
s.push(temp);
while(!s.empty())
{
    int a,b,c;
    a = s.top().a;
    b= s.top().b;
    c=s.top().c;
    s.pop();

    ans+=n/c;
    //Case 1: 1-22 2-12 2-23
      temp.a = a -2*b + 2*c;
      temp.b = 2*a - b + 2*c;
      temp.c = 2*a - 2*b + 3*c;
      if(temp.a<=n&&temp.b<=n&&temp.c<=n){
        s.push(temp);
      }

      //Case 2: 122 212 223
      temp.a = a + 2*b + 2*c;
      temp.b = 2*a + b + 2*c;
      temp.c = 2*a + 2*b + 3*c;
      if(temp.a<=n&&temp.b<=n&&temp.c<=n){
        s.push(temp);
      }
      //Case 3: -122 -212 -223
      temp.a = -a + 2*b + 2*c;
      temp.b = -2*a + b + 2*c;
      temp.c = -2*a + 2*b + 3*c;

      if(temp.a<=n&&temp.b<=n&&temp.c<=n){
        s.push(temp);
      }

}
return ans;
}

int main(){
int t,n;
cin>>t;
while(t--){
    scanf("%d",&n);
    printf("%d\n",countTriplets(n));
}

return 0;
}

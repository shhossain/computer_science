//A number that is a sum of its positive divisor less than itself is a perfect number.
#include<bits/stdc++.h>
using namespace std;
int main(){
	//input the number you want to check if it is a perfect number of not
	int n;
	cin>>n;
	int sum=1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			sum+=i;
			if(n/i!=i)
				sum+=n/i;
		}
	}
	if(sum==n)
		cout<<"It is a perfect number"<<endl;
	else
		cout<<"It is not a perfect number"<<endl;
}


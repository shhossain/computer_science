#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin >> n)
	{
		string j;
		cin >> j;
		int num = 0;
		
		for(int i =0;i<j.length();i++)
		if(j[i]=='A')num++;
		
		if(n-num>num)cout<<"Danik"<<endl;
		else if(n-num<num)cout<<"Anton"<<endl;
		else cout<<"Friendship"<<endl;
	}
	return 0;
 } 

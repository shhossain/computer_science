#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[]={'h','e','l','l','o'};
	char input[101];
	int j=0;
	cin>>input;
	int length=strlen(input);
	for(int i=0;i<length;i++)
	{
		if(input[i]==str[j])
		{
			j++;
		}
	} 
	if(j>=5)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}

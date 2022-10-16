/*
     hare krishna hare krishna krishna krishna hare hare 
     hare rama hare rama rama rama rama hare hare

      #4
*/

// union and intersection of unsorted arrays

#include<bits/stdc++.h>
using namespace std;
void unionsolve(int a[],int b[],int n,int m)
{
	set<int>s;
	for(int i=0;i<n;i++)
	s.insert(a[i]);
	for(int i=0;i<m;i++)
	s.insert(b[i]);
	
	for(auto i=s.begin();i!=s.end();i++)
	cout<<*i<<" ";
	
	
}
void intsolve(int a[],int b[],int n,int m)
{
	set<int>s;
	for(int i=0;i<n;i++)
	s.insert(a[i]);
	for(int i=0;i<m;i++)
	if(s.find(b[i])!=s.end())
	cout<<b[i]<<" ";
	
}
int main()
{
	int a[]={1,5,3,2,8,30,4};
	int b[]={4,2,1,7,3};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	unionsolve(a,b,n,m);
	cout<<endl;
	intsolve(a,b,n,m);
	return 0;
	
}

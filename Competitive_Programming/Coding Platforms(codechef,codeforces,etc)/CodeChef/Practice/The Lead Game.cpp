#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
	int s[11000],t[1000],n,a,b,max1=0,max2=0,sum1=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>s[i]>>t[i];
	    sum1=sum1+s[i];
	    sum2=sum2+t[i];
	  
	    if(sum1>sum2)
	    {
	        a=sum1-sum2;
	        if(a>max1)
	        max1=a;
	    }
	    else
	    {
	        b=sum2-sum1;
	        if(b>max2)
	        max2=b;
	    }
}
	    if(max1>max2)
	    cout<<"1"<<"\t"<<max1;
	    else
	    cout<<"2"<<"\t"<<max2;
	    
	   	
	   	
	
	return 0;
}


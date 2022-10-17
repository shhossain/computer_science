#include<iostream>
using namespace std;

class Luggage
{
    public:
    int A,B,C,D,E;
    int compare()
    {
        if(A+B<=D)
     	{
	    	if(C<=E)
		    {
			    cout<<"YES"<<endl;
    			return 0;
	    	}
    	}
	    if(B+C<=D)
    	{
	    	if(A<=E)
		    {
			    cout<<"YES"<<endl;
    			return 0;
	    	}
    	}
	    if(A+C<=D)
    	{
	    	if(B<=E)
		    {
			    cout<<"YES"<<endl;
    			return 0;
	    	}
    	}
	
	    cout<<"NO"<<endl;
	    return 0;
    }
};

int main()
{
    int x;
    cin>>x;
    Luggage l[x];
    
    for(int i = 0; i < x; i++)
    {
        cin>>l[i].A>>l[i].B>>l[i].C>>l[i].D>>l[i].E;
    }

    for(int i = 0;i<x;i++)
    {
        l[i].compare();
    }

    return 0;
}

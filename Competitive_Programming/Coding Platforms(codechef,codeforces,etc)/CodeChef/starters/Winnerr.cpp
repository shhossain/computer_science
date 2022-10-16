#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int pa,pb,qa,qb,p,q;
	    cin >> pa >> pb >> qa >> qb;
	    p = max(pa,pb);
	    q = max(qa,qb);
	    if(p<q)
	    cout << "P" <<endl;
	    else if (q<p)
	    cout<< "Q" <<endl;
	    else if (p==q)
	    cout << "TIE" <<endl;
	    else 
	    cout <<"Other"<<endl;
	}
	return 0;
}

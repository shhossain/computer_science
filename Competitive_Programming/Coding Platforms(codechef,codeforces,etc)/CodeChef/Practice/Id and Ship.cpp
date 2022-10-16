#include <iostream>
using namespace std;

int main() {
	// your code goes here
	  int n,i;
	  char c;
	  cin>>n;
	  
	  for(i=0;i<n;i++)
	  {
	       cin>>c;
	       if(c=='d'||c=='D')
	            cout<<"Destroyer"<<endl;
	       
	       else if(c=='b'||c=='B')
	            cout<<"BattleShip"<<endl;
	       
	       else if(c=='c'||c=='C')
	            cout<<"Cruiser"<<endl;
	       
	       else if(c=='f'||c=='F')
	            cout<<"Frigate"<<endl;
	       
	  }
	return 0;
}

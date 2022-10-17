#include <iostream>
using namespace std;

int main() {
	int x;
    while (x!=0)
    {
        int c=0;
        cin>>x;
        if (x==0)
        {
            return 0;
        }
        
        int arr[x]; 
        for (int i = 0; i < x; i++){
           cin>>arr[i]; //2,3,4,5,1
        }
      
        int arr2[x+1];
        for (int i = 0; i <=x; i++){
           arr2[i]=0;
        }
      
        for ( int i = 0; i < x; i++) {
            int y = arr[i];
            arr2[y] = i+1; 
        }
      
        for (int i = 0; i < x; i++){
            if (arr[i] == arr2[i+1]){
               c++;
             } 
        }
        
    
        if (c == x){
          cout<<"ambiguous"<<endl;
        }
        else{
        cout<<"not ambiguous"<<endl;
        }
    }
	return 0;
}

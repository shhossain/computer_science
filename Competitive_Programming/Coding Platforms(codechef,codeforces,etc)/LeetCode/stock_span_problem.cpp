Input: 
N = 7, price[] = [100 80 60 70 60 75 85]
Output:
1 1 1 2 1 4 6
  
//Approach 1 : Brute force => O(n^2)
  
//Approach 2 : Reducing problem to finding Next Greater to Left => O(n)

vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector <int> ans;
       stack <int> s;
       
       for(int i=0;i<n;i++){
           if(s.size()==0)
                ans.push_back(-1);
            
           else if(s.size()>0 && price[s.top()]>price[i])
                ans.push_back(s.top());
           else{
              while(s.size()>0 && price[s.top()]<=price[i])
                  s.pop();
              if(s.size()==0)
                ans.push_back(-1);
              else
                ans.push_back(s.top());
           }
           s.push(i);
       }
       
       for(int i=0;i<n;i++)
            ans[i]=i-ans[i];
            
       return ans;
    }

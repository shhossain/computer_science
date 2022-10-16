class Solution {
public:
    string convert(string s, int n) {
		if(n==1)                
            return s; 
        
        vector<string>x(n,"");  
        int i=0,r=0,sgn=1;
        while(i<s.length())
        {
            if(r<0)
            {
                r=1;
                sgn=1;          
                continue;
            }
            else if(r==n)       
            {
                r=n-2;          
                sgn=-1;         
                continue;
            }
            x[r]+=s[i++];      
            r+=sgn;             
        }
        
        string res="";
        for(i=0;i<n;i++)
        {
            cout<<x[i]<<"\n";
            res+=x[i];          
        }
        return res;
    }
};

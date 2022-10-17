class Solution {
public:
    int myAtoi(string s){
        int i=0,sign=1, ans=0, n=s.size();
        while(i<n && s[i]==' ') i++;
        
        if(s[i]=='-' || s[i]=='+'){
            sign = s[i]=='+' ? 1 : -1;
            i++;
        }
        
        while(i<n && s[i]>='0' && s[i]<='9'){
            if(ans>INT_MAX/10 || (INT_MAX/10 == ans && s[i]-'0'>7)) return sign==1 ? INT_MAX : INT_MIN;
            ans*=10;
            ans+= s[i]-'0';
            i++;
        }
        return ans*sign;
    }
};

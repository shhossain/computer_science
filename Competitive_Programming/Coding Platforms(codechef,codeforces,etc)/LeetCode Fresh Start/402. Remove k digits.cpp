class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.length() <= k) return "0";
        if (k == 0) return num;

        string ans = "";
        stack<char> s;

        for(int i = 0; i < num.length(); i++) {
            while(k > 0 && !s.empty() && num[i] < s.top()) {
                k--;
                s.pop();
            }

            s.push(num[i]);

            if (s.size() == 1 && num[i] == '0') s.pop();
        }

        while(k && !s.empty()) {
            s.pop();
            k--;
        }

        while(!s.empty()) {
            ans += s.top();
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        
        return ans.length() == 0 ? "0" : ans;
    }
};
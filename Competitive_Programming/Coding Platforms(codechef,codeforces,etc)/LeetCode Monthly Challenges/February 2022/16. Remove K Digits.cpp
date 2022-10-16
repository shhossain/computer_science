class Solution {
public:
    string removeKdigits(string num, int k) {
	if (k >= num.size()) return "0";
        
	std::string res;
	res += num[0];
        
	for (int i = 1; i < num.size(); i++) {
		while (num[i] < res.back() && k-- > 0) {
			res.pop_back();
		}
		res += num[i];
	}
	
    if (k > 0) 
        res.erase(res.size() - k);
	
    auto it = res.find_first_not_of('0');
	res.erase(0, it);
        
	return res.empty() ? "0" : res;
}
};

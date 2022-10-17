public class integer_to_roman {
    public String intToRoman(int num) {
        if(num==0) return "0";
		String result = new String();
		for(int i=0; i<num/1000; i++) {
			result+="M";
		}
		result += helper((num/100)%10, "C", "D", "M");
		result += helper((num/10)%10, "X", "L", "C");
		result += helper(num%10, "I", "V", "X");
		return result;
    }
    public String helper(int num, String a, String b, String c) {
		String ans = new String();
		int factor = num%5;
		if(factor == 4) {
			if(num>=5) ans += a+c;
			else ans += a+b;
		}
		else {
			if(num>=5) {
				num -= 5;
				ans += b;
			}
			for(int i=0;i<num;i++) {
				ans += a;
			}
		}
		return ans;
	}
    
    
}

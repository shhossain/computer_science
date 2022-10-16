#include <bits/stdc++.h> 
using namespace std; 

void printWords(int h, int m) 
{ 
	char nums[][64] = { "zero", "one", "two", "three", "four", 
						"five", "six", "seven", "eight", "nine", 
						"ten", "eleven", "twelve", "thirteen", 
						"fourteen", "fifteen", "sixteen", "seventeen", 
						"eighteen", "nineteen", "twenty", "twenty one", 
						"twenty two", "twenty three", "twenty four", 
						"twenty five", "twenty six", "twenty seven", 
						"twenty eight", "twenty nine", 
					}; 

	if (m == 0) 
		printf("%s o' clock\n", nums[h]); 

	else if (m == 1) 
		printf("one minute past %s\n", nums[h]); 

	else if (m == 59) 
		printf("one minute to %s\n", nums[(h % 12) + 1]); 

	else if (m == 15) 
		printf("quarter past %s\n", nums[h]); 

	else if (m == 30) 
		printf("half past %s\n", nums[h]); 

	else if (m == 45) 
		printf("quarter to %s\n", nums[(h % 12) + 1]); 

	else if (m <= 30) 
		printf("%s minutes past %s\n", nums[m], nums[h]); 

	else if (m > 30) 
		printf("%s minutes to %s\n", nums[60 - m], 
									nums[(h % 12) + 1]); 
} 

int main() 
{ 
    
	int t,h,m;
	cin>>t;
	while(t--){
    	cin>>h>>m;
	printWords(h, m); 
	    
	}
	return 0; 
} 

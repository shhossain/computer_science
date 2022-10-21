## Generate IP Adresses

Given a string S containing only digits, Your task is to complete the function genIp() which returns a vector containing all possible combinations of valid IPv4 IP addresses and takes only a string S as its only argument.
Note: Order doesn't matter. A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.

For string 11211 the IP address possible are
1.1.2.11
1.1.21.1
1.12.1.1
11.2.1.1

**Example 1:**

```
Input:
S = 1111
Output: 1.1.1.1
```

**Example 2:**

```
Input:
S = 55
Output: -1
```

## Solution

```cpp
// C++ program to generate all possible
// valid IP addresses from given string
#include <bits/stdc++.h>
using namespace std;

// Function checks whether IP digits
// are valid or not.
int is_valid(string ip)
{
	// Splitting by "."
	vector<string> ips;
	string ex = "";
	for (int i = 0; i < ip.size(); i++) {
		if (ip[i] == '.') {
			ips.push_back(ex);
			ex = "";
		}
		else {
			ex = ex + ip[i];
		}
	}
	ips.push_back(ex);

	// Checking for the corner cases
	// cout << ip << endl;
	for (int i = 0; i < ips.size(); i++) {
		// cout << ips[i] <<endl;
		if (ips[i].length() > 3
			|| stoi(ips[i]) < 0
			|| stoi(ips[i]) > 255)
			return 0;

		if (ips[i].length() > 1
			&& stoi(ips[i]) == 0)
			return 0;

		if (ips[i].length() > 1
			&& stoi(ips[i]) != 0
			&& ips[i][0] == '0')
			return 0;
	}
	return 1;
}

// Function converts string to IP address
void convert(string ip)
{
	int l = ip.length();

	// Check for string size
	if (l > 12 || l < 4) {
		cout << "Not Valid IP Address";
	}

	string check = ip;
	vector<string> ans;

	// Generating different combinations.
	for (int i = 1; i < l - 2; i++) {
		for (int j = i + 1; j < l - 1; j++) {
			for (int k = j + 1; k < l; k++) {
				check = check.substr(0, k) + "."
						+ check.substr(k);
				check
					= check.substr(0, j) + "."
					+ check.substr(j);
				check
					= check.substr(0, i) + "."
					+ check.substr(i);

				// cout<< check <<endl;
				// Check for the validity of combination
				if (is_valid(check)) {
					ans.push_back(check);
					std::cout << check << '\n';
				}
				check = ip;
			}
		}
	}
}

// Driver code
int main()
{
	string A = "25525511135";
	string B = "25505011535";

	convert(A);
	convert(B);

	return 0;
}
```

## Company Tags

```
Amazon
```

## Detailed Explanation

[Click Here](https://www.geeksforgeeks.org/program-generate-possible-valid-ip-addresses-given-string/)

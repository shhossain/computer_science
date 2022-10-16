#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	    int M, N, K;
	    cin >> M >> N >> K;
	    vector <int> defect(M);
	    for(int i=0; i<M; i++)
	    {
	        cin >> defect[i];
	    }
	    sort(defect.begin(), defect.end());
	    int i=0, sum=0;
	    while(K-- != 0)
	    {
	        defect[i] = N-defect[i];
	        i++;
	    }
	    for(int j=0; j<M; j++)
	    {
	        sum = sum + defect[j];
	    }
	    cout << sum << endl;
	}
	return 0;
}

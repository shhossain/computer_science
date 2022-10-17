class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {

	    if(n==1)
	    return arr[0];
	    long long minn=1,maxx=1,ans=1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            minn=maxx=1;
	        }
	        else if(arr[i]>0){

	            maxx=maxx*arr[i];
	            minn=min((long long )arr[i]*minn,(long long)1);

	            }
	            else if(arr[i]<0){
	                swap(maxx,minn);
	                minn=minn*arr[i];
	                maxx=max((long long)1,(long long)arr[i]*maxx);

	            }
	             ans=max(maxx,ans);
	        }
	        return ans;
	    }

};

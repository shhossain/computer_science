class Solution{
    static void reverse(int [] arr ,int i ,int j)
    {
        while(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] =temp;
            i++;
            j--;
            
        }
    }
    static List<Integer> nextPermutation(int N, int arr[]){
        // code here
        List<Integer> ll =new ArrayList<>();
        int i1 =-1;
        int i2 =-1;
        for( int i= N-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                i1 = i;
                break;
            }
        }
        
        if(i1<0)
        {
            reverse(arr,0,N-1);
        }
        else
        {
            for(int j =N-1;j>=0;j--)
            {
                if(arr[j]>arr[i1])
                {
                    i2 = j;
                    break;
                }
            }
             int temp = arr[i2];
            arr[i2] = arr[i1];
            arr[i1] =temp;
             
             reverse(arr,i1+1,N-1);
            
        }
        
        for(int i =0;i<N;i++)
        {
            ll.add(arr[i]);
        }
        return ll;
    }
}

class Solution {
    public int findTheLongestSubstring(String s) {
        List<int[]> list = new ArrayList<>();
        
        int[] count = new int[5];
        for(int i=0; i<s.length(); i++)
        {
            char c = s.charAt(i);
            list.add(new int[]{count[0], count[1], count[2], count[3], count[4]});
            if(c=='a')
                count[0]++;
            if(c=='e')
                count[1]++;
            if(c=='i')
                count[2]++;
            if(c=='o')
                count[3]++;
            if(c=='u')
                count[4]++;
        }
        list.add(new int[]{count[0], count[1], count[2], count[3], count[4]});
        
        int max=0;
        for(int i=0; i<list.size(); i++)
        {
            int len=0;
            for(int j=list.size()-1; j>=max+i; j--)
            {
                int[] ci = list.get(i);
                int[] cj = list.get(j);
                Boolean flag=false;
                for(int k=0; k<5; k++)
                {
                    if((ci[k]-cj[k]) %2 ==0)
                        flag=true;
                    else
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag==true)
                {
                    len=j-i;
                    if(len>max)
                        max=len;
                }
            }
        }
        return max;
    }
}

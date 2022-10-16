class Solution {
    public int numOfPairs(String[] nums, String target) {
        HashSet<String> set = new HashSet<>();
        int n = nums.length;
        if(n == 0 ) return 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            for(int j=0; j<n; j++) {
                if(i!=j){
                    if(target.equals(nums[i]+nums[j])) {
                        set.add(i + " " + j);
                    }
                }
              
            }

        }
        return set.size();

    }
}

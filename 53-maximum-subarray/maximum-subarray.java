class Solution {
    public int maxSubArray(int[] nums) {
        int cSum = 0;
        int ans = Integer.MIN_VALUE;
        for(int i = 0 ; i < nums.length ; i++){
            cSum+=nums[i];
            if(cSum > ans){
                ans = cSum;
            }
            if(cSum < 0){
                cSum = 0;
            }
        }
        return ans;
    }
}
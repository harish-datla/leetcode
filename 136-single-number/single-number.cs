public class Solution {
    public int SingleNumber(int[] nums) {
        var ans = nums[0];
        for(int i = 1 ; i < nums.Length ; i++){
            ans ^= nums[i]; 
        }
        return ans;
    }
}
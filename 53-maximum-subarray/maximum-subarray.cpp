class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int consecutiveSum = 0;
        int ans = INT_MIN;
        for(int i= 0 ; i < nums.size() ; i++){
            consecutiveSum+=nums[i];
            if(consecutiveSum > ans){
                ans = consecutiveSum;
            }
            if(consecutiveSum < 0){
                consecutiveSum = 0;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int consecutiveSum = 0;
        int maxConsecutiveSum = INT_MIN;
        for(int i= 0 ; i < nums.size() ; i++){
            consecutiveSum+=nums[i];
            if(consecutiveSum > maxConsecutiveSum){
                maxConsecutiveSum = consecutiveSum;
            }
            if(consecutiveSum < 0){
                consecutiveSum = 0;
            }
        }
        return maxConsecutiveSum;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum = 0;
        int ans = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            csum+=nums[i];
            ans = max(csum,ans);
            csum < 0?csum = 0: NULL ;
        }
        return ans;
    }
};
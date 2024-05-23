class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int ans = INT_MIN;
        int rotSum = 0;
        int iterator = 0;
        int normalSum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            rotSum += (iterator*nums[i]);
            iterator++;
            normalSum+=nums[i];
        }
        ans = max(ans,rotSum);
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            rotSum = rotSum + (normalSum - (nums.size())*(nums[i]));
            ans = max(ans,rotSum);
        }
        return ans;
    }
};
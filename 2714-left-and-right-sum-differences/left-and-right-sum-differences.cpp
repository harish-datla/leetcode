class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int sum = accumulate(nums.begin(),nums.end(),0);
        cout << sum << endl;
        int leftSum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            cout << leftSum << " " << sum - leftSum << endl;
            ans[i] = abs(leftSum - (sum - leftSum - nums[i]));
            leftSum+=nums[i];
        }
        return ans;
    }
};
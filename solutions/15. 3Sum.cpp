class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        if (nums.size() < 3 || nums.back() < 0 || nums.front() > 0) return {};
        
        for (int k = 0; k < nums.size() - 2; k++) { // nums's size should be larger than or equal to 3
            if (nums[k] > 0) break;
            // should handle current number, then skip following repeat numbers, below is not right as it 
            // does not handle current number first
            // example: [-1, -1, 0, 1, 2], expect: [-1, -1, 2] and [-1, 0, 1], but only get [-1, 0, 1]
            // if (k < nums.size() - 1 && nums[k] == nums[k + 1]) continue; 
            // should handle current number, then skip following repeat numbers
            if (k > 0 && nums[k] == nums[k - 1]) continue; 
            int target = 0 - nums[k];
            int i = k + 1, j = nums.size() - 1;
            while (i < j) {
                if (nums[i] + nums[j] == target) {
                    res.push_back({nums[k], nums[i], nums[j]});
                    // skip repeat number
                    while (i < j && nums[i] == nums[++i]) {};
                    while (i < j && nums[j] == nums[--j]) {};
                } else if (nums[i] + nums[j] < target) {
                    i++;
                } else {
                    j--;
                }
            }                        
        }
        return res;
    }
};

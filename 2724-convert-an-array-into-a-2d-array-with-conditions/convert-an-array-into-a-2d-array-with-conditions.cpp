class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> count(nums.size() + 1);
        vector<vector<int>> ans;
        for(int x : nums){
            if(ans.size() <= count[x]){
                ans.push_back({});
            }
            ans[count[x]++].push_back(x);
        }
        return ans;
    }
};
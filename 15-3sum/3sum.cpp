class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() <= 2) return {};
        vector<vector<int>> ans;
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            if(i > 0 && nums[i] == nums[i-1])continue;
            int target = -nums[i];
            int j = i+1;
            int k = nums.size() - 1;
            while(j < k){
               if(nums[j] + nums[k] == target){
                ans.push_back({nums[i], nums[j], nums[k]});
                while(j < k && nums[j] == nums[j+1])j++;
                while(j < k && nums[k]  == nums[k-1])k--;
                j++;
                k--;
               }else if(nums[j] + nums[k] < target){
                j++;
               }
               else{
                k--;
               } 
            }
        }

        return ans;
    }
};
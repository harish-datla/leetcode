class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> output;
        if(n < 4) return output;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-3; i++){
            if(i > 0 and nums[i-1] == nums[i]) continue;
            for(int j=i+1; j<n-2; j++){
                if(j > i+1 and nums[j-1] == nums[j]) continue;
                int left = j + 1, right = n - 1;
                while(left < right){
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if(sum < target) left++;
                    else if(sum > target) right--;
                    else{
                        output.push_back({nums[i], nums[j], nums[left++], nums[right--]});
                        while(left < right and nums[left] == nums[left-1]) left++;
                        while(left < right and nums[right] == nums[right+1]) right--;
                    }
                }
            }
        }
        return output;
    }
};
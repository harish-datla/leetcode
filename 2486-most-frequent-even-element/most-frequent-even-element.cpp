class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        int max_freq = INT_MIN;
        int ans = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]%2 == 0){
                mp[nums[i]]+=1;
                 if(mp[nums[i]] > max_freq || mp[nums[i]] == max_freq && nums[i] < ans){
                ans = nums[i];
                max_freq = mp[nums[i]];
            }
            }
        }
        
        
        return ans == INT_MAX ? -1 : ans;
    }
};

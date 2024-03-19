class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            if(mp[nums[i] + nums[i+1]])return true;
            mp[nums[i] + nums[i+1]] = 1;
        }
        return false; 
    }
};
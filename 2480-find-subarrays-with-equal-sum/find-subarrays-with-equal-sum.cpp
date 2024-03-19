class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int> mp;
        int size = nums.size() - 1;
        for(int i = 0 ; i < size ; i++){
            int sum = nums[i] + nums[i+1];
            if(mp[sum])return true;
            mp[sum] = 1;
        }
        return false; 
    }
};
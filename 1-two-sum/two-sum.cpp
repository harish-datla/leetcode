class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.contains(target - nums[i])){
                return vector<int>{mp[target - nums[i]],i};
            }
            mp[nums[i]] = i;
        }
        return vector<int>();
    }
};
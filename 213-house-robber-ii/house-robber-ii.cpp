class Solution {
public:

    int linearHouseRobber(vector<int>& nums, int l , int r){
        if(r == l)return nums[l];
        int maxRobbedTillPrevHouse = nums[l];
        int maxRobbedTillCurrHouse = max(nums[l],nums[l+1]);
        for(int i = l+2 ; i <= r ; i++){
            int newMaxRobbedTillPrevHouse = maxRobbedTillCurrHouse;
            maxRobbedTillCurrHouse = max(nums[i] + maxRobbedTillPrevHouse , maxRobbedTillCurrHouse);
            maxRobbedTillPrevHouse = newMaxRobbedTillPrevHouse;
        } 
        return maxRobbedTillCurrHouse;
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        return max(linearHouseRobber(nums, 0, nums.size() - 2), linearHouseRobber(nums, 1, nums.size() - 1));
    }
};
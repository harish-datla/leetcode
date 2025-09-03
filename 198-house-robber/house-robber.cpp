class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int maxRobbedTillPrevHouse = nums[0];
        int maxRobbedTillCurrentHouse = max(nums[0], nums[1]);
        for(int i = 2 ; i < nums.size() ; i++){
            int newMaxRobbedTillPrevHouse = maxRobbedTillCurrentHouse;
            maxRobbedTillCurrentHouse = max(maxRobbedTillPrevHouse + nums[i], maxRobbedTillCurrentHouse);
            maxRobbedTillPrevHouse = newMaxRobbedTillPrevHouse;
        }
        return maxRobbedTillCurrentHouse;


    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        if(nums.size() == 2)return max(nums[0], nums[1]);
        int maxRobbedOverall = -1;
        int l = 0;
        int r = nums.size() - 2;
        int maxRobbedTillPrevHouse = nums[l];
        int maxRobbedTillCurrHouse = max(nums[l],nums[l+1]);
        for(int i = l+2 ; i <= r ; i++){
            int newMaxRobbedTillPrevHouse = maxRobbedTillCurrHouse;
            maxRobbedTillCurrHouse = max(nums[i] + maxRobbedTillPrevHouse , maxRobbedTillCurrHouse);
            maxRobbedTillPrevHouse = newMaxRobbedTillPrevHouse;
        } 
        maxRobbedOverall = maxRobbedTillCurrHouse;
        
        l = 1;
        r = nums.size() - 1;
        maxRobbedTillPrevHouse = nums[l];
        maxRobbedTillCurrHouse = max(nums[l],nums[l+1]);
        for(int i = l+2 ; i <= r ; i++){
            int newMaxRobbedTillPrevHouse = maxRobbedTillCurrHouse;
            maxRobbedTillCurrHouse = max(nums[i] + maxRobbedTillPrevHouse , maxRobbedTillCurrHouse);
            maxRobbedTillPrevHouse = newMaxRobbedTillPrevHouse;
        } 
        maxRobbedOverall = max(maxRobbedOverall,maxRobbedTillCurrHouse);
        

        return maxRobbedOverall;
    }
};
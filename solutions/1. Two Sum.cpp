class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //1 pass hash table
        vector<int> returnVal;
        unordered_map<int,int> integers;
        
        for (int i = 0; i<nums.size();i++){
            int complement = target - nums[i];
            if (integers.find(complement) != integers.end()){
               returnVal = {i,integers.at(complement)};
               return returnVal;
            }
            
            integers[nums[i]] = i; 
        }
        return returnVal;
    }
};
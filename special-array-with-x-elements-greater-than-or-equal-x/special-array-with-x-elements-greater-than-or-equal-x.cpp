class Solution {
public:
    int specialArray(vector<int>& nums) {
        if(nums.size() == 0)return -1;
        if(nums.size() == 1){
            if(nums[0] >= 1)return 1;
            
            return -1;
        }
        sort(nums.begin(),nums.end());
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums.end() - lower_bound(nums.begin(),nums.end(),i+1)   == i+1){
                return i+1;
            }
        }
        
        return -1;
    }
};
// [0,0,3,4,4]


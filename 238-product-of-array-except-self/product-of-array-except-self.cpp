class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out = nums;
        for(int i = 1 ; i < nums.size() ; i++){
            nums[i] = nums[i]*nums[i-1];
        }
        for(int i = nums.size() - 2 ; i >= 0 ; i--){
            out[i] = out[i]*out[i+1];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(i == 0){
                out[i] = out[i+1];
                continue;
            }
            if(i == nums.size() - 1){
                out[i] = nums[i-1];
                continue;
            }
            out[i] = nums[i-1]*out[i+1];
        }
        return out;

    }
};
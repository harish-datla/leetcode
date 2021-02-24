class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        int ans = 0;
        int temp = 0;
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            if(nums[i] == 1 && nums[i+1] == 1){
                temp++;
            }else if(nums[i] == 1 && nums[i+1] == 0){
                ans = max(ans,temp+1);
                temp = 0;
            }else{
                ans = max(ans,temp);
                temp = 0;
            }
        }
        if(nums[nums.size() - 1] == 1){
            ans = max(ans,temp+1);
        }
        return ans;
    }
};
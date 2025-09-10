class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int i = 0;
       for(int i = 0 ; i < nums.size() ; i++){
            while(nums[i] > 0 && nums[i] <= nums.size() && nums[nums[i] - 1] != nums[i]){
                swap(nums[nums[i] - 1], nums[i]);
            }
       }
    //    for(int i = 0 ; i < nums.size() ; i++){
    //     cout << nums[i] << " ";
    //    }
       int count = 0;
       for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] == count+1){
            count++;
        }
       }
       return count+1; 
    }
};

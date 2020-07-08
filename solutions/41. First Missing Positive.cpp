// thought process for this question
// what are the operations that i can do in an array ?? swapping?? delete ?? modify ?? 
// sliding window ?? kadane ?? graph like ?? cummulative sum ??

// most of these can be ignored because of the nature of the problem, swapping seems to be the only //case and we can use indices to do the same.
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++)
        {
            while(nums[i]>0 && nums[i] <= nums.size() && nums[nums[i]-1]!=nums[i])
                swap(nums[nums[i]-1],nums[i]);
        }
        
        for(int  i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != i + 1)return i+1;
        }
        
        return nums.size()+1;
    }
};
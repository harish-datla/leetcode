class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        int x = 0;
        nums[x] = nums[0];
        x++;
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[x++] = nums[i];
            }
        }
        //cout << x << endl;
        return x;
    }
};
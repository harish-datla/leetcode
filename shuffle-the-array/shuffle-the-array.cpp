class Solution {
public:
    int getDesiredIndex(int i , int n){
        if(i < n){
            return 2*i;
        }
        return 2*(i - n)+1;
    }
    
    vector<int> shuffle(vector<int>& nums, int n) {
       for(int i = 0 ; i < 2*n ; i++){
           int j = i;
           while(nums[i] >= 0){
               j = getDesiredIndex(j,n);
               int temp = nums[i];
               nums[i] = nums[j];
               nums[j] = -temp;
           }
       }
        for(int i = 0 ; i < 2*n ; i++){
            nums[i] = -nums[i];
        }
        return nums;
    }
};


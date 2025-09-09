class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate;
        for(int i = 0 ; i < nums.size() ; i++){
            if(count == 0)
                candidate = nums[i];
            if(candidate == nums[i]){
                count+=1;
            }
            else{
                count-=1;
            }
        }
        return candidate;
    }
};
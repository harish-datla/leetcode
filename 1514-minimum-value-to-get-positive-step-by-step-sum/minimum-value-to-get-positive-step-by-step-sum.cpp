class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min = INT_MAX;
        int prefix_sum = 0;
        for(int i=0 ;i < nums.size() ; i++){
            prefix_sum+=nums[i];
            if(prefix_sum  < min){
                min = prefix_sum;
            }
        }
        if(min <= 0){
            return abs(min)+1;
        }
        return 1;
    }
};
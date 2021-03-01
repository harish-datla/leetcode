class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        vector<int> csum(nums.size(),0);
        nums[0] == 0 ? nums[0] = -1 : true ;
        csum[0] = nums[0]+50000;
        for(int i = 1 ; i < nums.size() ; i++){
            nums[i] == 0 ? nums[i] = -1 : true ;
            csum[i] = csum[i-1] + nums[i];
        } 
        vector<int> idx(100008,0);
        
        int cmax = 0, left = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(idx[csum[i]] == 0){
                idx[csum[i]] = i+1;
            }else{
                cmax = max(i+1 - idx[csum[i]]  , cmax);
            }
            if(csum[i] == 50000){
                cmax = max(i+1 , cmax);
            }
        }
        return cmax;
    }
};

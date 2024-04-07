class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        if(nums.size() == 1)return 1;
        long long ans = 0;
        int lenConsecutiveBinary = 1;
        for(int i = 1 ; i <  nums.size() ; i++){
            if(nums[i] != nums[i-1]){
                lenConsecutiveBinary+=1;
            }else{
                ans+=((long long)lenConsecutiveBinary)*((long long)lenConsecutiveBinary + 1)/2;
                lenConsecutiveBinary = 1;
            }
        }
        ans+=((long long)lenConsecutiveBinary)*((long long)lenConsecutiveBinary + 1)/2;
        return ans; 

    }
};
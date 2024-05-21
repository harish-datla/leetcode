class Solution {
public:

    int reverse(int num){
        int ans = 0;
        while(num){
            ans = ans*10 + num%10;
            num = num/10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
       set<int> s;
       for(int i = 0 ; i < nums.size() ; i++){
            s.insert(nums[i]);
            s.insert(reverse(nums[i]));
       }
       return s.size(); 
    }
};
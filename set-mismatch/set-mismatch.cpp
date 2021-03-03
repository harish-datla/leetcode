#include<numeric>
class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    vector<int> findErrorNums(vector<int>& nums) {
        long long int sum = 0;
        sum = accumulate(nums.begin(),nums.end(),sum);
        long long int asum = nums.size()*(nums.size() + 1)/2;
        long long int assum =  nums.size()*(nums.size() + 1)*(2*nums.size() + 1)/6;
        long long int ssum =  0;
        ssum = accumulate(nums.begin(),nums.end(),ssum,[](long long int x , long long int y){
            return x + y*y;
        });
        long long int aminusb =  asum - sum;
        long long int aplusb =(assum -ssum)/aminusb;
        
        return { int((aplusb - aminusb)/2) ,int((aplusb+aminusb)/2) };
    }
};
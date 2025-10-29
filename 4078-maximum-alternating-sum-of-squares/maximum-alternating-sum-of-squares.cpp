class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        sort(nums.begin(), nums.end(), [](int a, int b){
            return abs(a) < abs(b);
        });
        int n = nums.size();
        for(int i = 0 ; i < n/2 ; i++){
            cout << nums[i];
            ans+=((long long)(nums[n-1-i]*nums[n-1-i]) - (long long)(nums[i]*nums[i]));
        }
        if(n%2){
            long long z = (long long)nums[n/2]*(long long)nums[n/2];
            ans+=z;
        }
        return ans;
    }
};

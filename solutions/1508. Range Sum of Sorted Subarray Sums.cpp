class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> interim;
        int mod = 1e9+7;
        for(int i = 1 ; i < nums.size() ; i++){
            nums[i] = nums[i-1]+nums[i];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            int ans = nums[i];
            interim.push_back(ans);
            for(int j = i+1 ; j < nums.size() ; j++){
                ans+=nums[j];
                interim.push_back(ans);
            }
        }
        
        
        sort(interim.begin(),interim.end());
        // for(int i = 0 ; i < interim.size() ; i++){
        //     cout << interim[i] << endl;
        // }
        int out = 0;
        for(int i = left-1; i < right; i++){
            out = (out%mod + interim[i]%mod)%mod;
        }
        return out;
    }
};

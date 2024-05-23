class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> mp;
        int maxFreq = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]+=1;
            maxFreq = max(maxFreq,mp[nums[i]]);
        }
        //cout << maxFreq << endl;
        vector<vector<int>> ans(maxFreq,vector<int>(1,-1));
        //sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            //cout << i << endl;
          if(ans[mp[nums[i]] - 1][0] == -1){
            ans[mp[nums[i]] - 1][0] = nums[i];
          }
          else{
            ans[mp[nums[i]] - 1].push_back(nums[i]);
          }
          mp[nums[i]]--;  
        }
        return ans;
    }
};
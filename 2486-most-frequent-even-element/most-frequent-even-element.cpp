class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]%2 == 0){
                mp[nums[i]]+=1;
            }
        }
        int max_freq = INT_MIN;
        int num = -1;
        for(auto it = mp.begin() ; it != mp.end() ; it++){
            if(it->second > max_freq){
                max_freq = it->second;
                num = it->first;
            }
        }
        return num;
    }
};
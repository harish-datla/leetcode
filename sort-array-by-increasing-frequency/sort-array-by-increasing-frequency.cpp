class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i = 0 ; i < nums.size() ; i++){
            a[nums[i]+100]+=1;
        }
        sort(nums.begin(),nums.end(), [&](const auto& left , const auto& right){
           return  a[left+100] == a[right+100] ?  left > right :  a[left+100] < a[right+100];
        });
        return nums;
    }
};
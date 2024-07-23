class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> a(201,0);
        for(int i = 0 ; i < nums.size() ; i++){
            a[nums[i]+100]+=1;
        }
        sort(nums.begin(),nums.end(),[&](auto& left , auto& right){
            if(a[left+100] == a[right+100])
                return left > right;
            return a[left+100] < a[right+100];
        }); 

        return nums;
    }
};
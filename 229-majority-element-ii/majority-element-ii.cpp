class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        pair<int,int> p1(INT_MAX, 0);
        pair<int,int> p2(INT_MAX, 0);
        for(int i = 0 ; i < nums.size() ; i++){
            if(p1.first == nums[i]){
                p1.second++;
                continue;
            }
            if(p2.first == nums[i]){
                p2.second++;
                continue;
            }
            if(p1.second <= 0 && p2.first != nums[i]){
                p1.first = nums[i];
                p1.second = 1;
                continue;
            }
            if(p2.second <= 0 && p1.first != nums[i]){
                p2.first = nums[i];
                p2.second = 1;
                continue;
            }
            p1.second--;
            p2.second--;
        }
        p1.second = 0;p2.second = 0;
        for(int i : nums)
        {
            if(i==p1.first)++p1.second;
            else if(i==p2.first)++p2.second;
        }
        vector<int> out;
        if(p1.second > nums.size()/3) out.push_back(p1.first);
        if(p2.second > nums.size()/3) out.push_back(p2.first);
        return out;

    }
};
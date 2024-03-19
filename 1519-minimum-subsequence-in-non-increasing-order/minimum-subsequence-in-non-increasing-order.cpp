class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> res;
        int half_sum = accumulate(nums.begin(),nums.end(), 0)/2;
        int sub_sum = 0;
        priority_queue<int> pq(nums.begin(),nums.end());
        while(sub_sum <= half_sum){
            sub_sum+=pq.top();
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};
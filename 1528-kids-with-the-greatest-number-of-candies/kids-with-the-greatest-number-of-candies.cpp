class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int extraCandies) {
        int size = a.size();
        int max = INT_MIN;
        for(int i = 0 ; i < size ; i++){
            if(a[i] > max)max = a[i];
        }
        vector<bool> ans;
        for(int i = 0 ; i < size ; i++){
            ans.push_back(a[i] + extraCandies >= max);
        }
        return ans;
    }
};
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int extraCandies) {
        int size = a.size();
        int max = *max_element(a.begin(), a.end());
        vector<bool> ans;
        for(int i = 0 ; i < size ; i++){
            ans.push_back(a[i] + extraCandies >= max);
        }
        return ans;
    }
};
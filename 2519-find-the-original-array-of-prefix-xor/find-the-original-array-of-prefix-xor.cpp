class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        vector<int> arr(pref.size());
        arr[0] = pref[0];
        for(int i = 1 ; i < pref.size() ; i++){
            arr[i] = pref[i]^pref[i-1];
        }
        return arr;
    }
};
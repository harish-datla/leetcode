class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;

        for(int i = 0 ; i < arr2.size() ; i++){
            mp[arr2[i]] = i+1;
        }

        sort(arr1.begin(),arr1.end(),[&](const auto& left, const auto& right){
            if(mp[left] && mp[right]) return mp[left] < mp[right];
            if(!mp[left] && mp[right]) return false;
            if(mp[left] && !mp[right]) return true;
            if(!mp[left] && !mp[right]) return left < right; 

            return false;
        });

        return arr1;
    }
};
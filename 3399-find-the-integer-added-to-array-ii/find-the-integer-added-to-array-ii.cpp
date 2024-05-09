class Solution {
public:

int findDiffSimilarSubarray(vector<int> v1, vector<int> v2, int i , int j){
        v1.erase(v1.begin() + i, v1.begin() +i+1);
        v1.erase(v1.begin() +j, v1.begin() +j+1);
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int diff = v2[0] - v1[0];
        int flag = true;
        for(int i = 0 ; i <  v1.size(); i+=1){
           if(v2[i] - v1[i] != diff){
            flag = false;
            break;
           }
        }
        if(flag){
            return diff;
        }
        return INT_MAX;
    }

    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int ans = INT_MAX;

        for(int i = 0 ; i < nums1.size() ; i++){
            for(int j = 0 ; j < nums1.size() && j != i ; j++){
                ans = min(ans, findDiffSimilarSubarray(nums1, nums2, i , j));
            }
        }
        return ans;
    }
};
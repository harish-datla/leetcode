class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int> mp;
        vector<int> ans;
        int count = 0;
        for(int i = 0 ; i < A.size() ; i++){
            mp[A[i]]+=1;
            mp[B[i]]+=1;
            if(mp[A[i]] == 2){
                count+=1;
            }
            if(mp[B[i]] == 2){
                count+=1;
            }
            if(A[i] == B[i])count--;
            ans.push_back(count);
        }
        return ans;
    }
};
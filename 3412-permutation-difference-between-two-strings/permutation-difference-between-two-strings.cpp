class Solution {
public:
    int findPermutationDifference(string s, string t) {
       unordered_map<char,int> mp1;
       unordered_map<char,int> mp2;
       for(int i = 0 ; i < s.size() ; i++){
         mp1[s[i]] = i;
       }
       for(int i = 0 ; i < t.size() ; i++){
         mp2[t[i]] = i;
       }
       int ans = 0;
       for(int i = 0 ; i < s.size() ; i++){
            ans+=abs(mp1[s[i]] - mp2[s[i]]);
       }
       return ans;

    }
};
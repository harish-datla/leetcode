class Solution {
public:
    int findPermutationDifference(string s, string t) {
       int pos[26] = {0};
       int ans = 0;
       for(int i = 0 ; i < t.size() ; i++){
         pos[s[i] - 'a'] = i;
       }
       for(int i = 0 ; i < s.size() ; i++){
            ans+=abs(i - pos[t[i] - 'a']);
       }
       return ans;

    }
};
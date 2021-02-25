class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0;
        for(; i < word1.size() && i < word2.size() ; i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        while(i < word1.size()){
            ans+=word1[i];
            i++;
        }
        while(i < word2.size()){
            ans+=word2[i];
            i++;
        }
        
        return ans;
    }
};
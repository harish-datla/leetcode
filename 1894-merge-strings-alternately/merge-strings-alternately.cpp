class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0 , j = 0;
        int size1 = word1.size();
        int size2 = word2.size();
        string ans = "";
        while(i < size1 && j < size2){
            ans+=word1[i];
            ans+=word2[j];
            i++;
            j++;
        }
        while(i < size1){
            ans+=word1[i];
            i++;
        }
        while(j < size2){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};
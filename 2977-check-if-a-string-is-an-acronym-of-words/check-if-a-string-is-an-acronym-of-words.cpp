class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string c;
        for(int i = 0 ; i < words.size() ; i++){
            c+=words[i][0];
        }
        return c == s;
    }
};
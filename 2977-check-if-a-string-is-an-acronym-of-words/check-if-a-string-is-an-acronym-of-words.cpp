class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string c = "";
        for(auto w : words)c+=w[0]; 
        return c == s;
    }
};
class Solution {
public:
    bool isCharInWord(char c, string word){
        for(int i = 0 ; i < word.size() ; i++){
            if(word[i] == c)return true;
        }
        return false;
    }

    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i = 0 ; i < words.size() ; i++){
            if(isCharInWord(x,words[i]))
                ans.push_back(i);
        }
        return ans;
    }
};
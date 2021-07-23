class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> words;
        string s = "";
        for(int i = 0 ; i < text.size() ; i++){
            if(text[i] == ' '){
                words.push_back(s);
                //cout << s << endl;
                s = "";
                continue;
            }
            s+=text[i];
        }
        words.push_back(s);
        vector<bool> a(26,false);
        
        for(int i = 0 ; i < brokenLetters.size() ; i++){
            a[brokenLetters[i] - 'a'] = true;
        }
        int count = 0;
        for(int i = 0 ; i < words.size() ; i++){
            bool flag = true;
            for(int j = 0; j < words[i].size() ; j++){
                if(a[words[i][j]-'a']){
                    //cout << words[i] << endl;
                    flag = false;
                    break;
                }
            }
            //cout << words[i] << endl;
            if(flag){
                count++;
            }
        }
        return count;
    }
};
class Solution {
public:

    bool isVowel(char c){
        switch(tolower(c)){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default :
                break;
        }
        return false;
    }
    bool isValid(string word) {
        if(word.size() < 3)return false;
        int vowels = 0;
        int consonants = 0;
        for(int i = 0 ; i < word.size() ; i++){
            if(!(isalpha(word[i]) || isdigit(word[i]))){
                return false;
            }
            if(isVowel(word[i])){
                vowels++;
            }else{
                if(isalpha(word[i])){
                    consonants++;
                }
            }
        }
        cout << vowels << consonants << endl;
        if(vowels == 0 || consonants == 0){
            return false;
        }
        return true;

    }
};
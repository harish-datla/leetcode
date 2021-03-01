class Solution {
public:
    
    bool isSubsequence(string x, string y ){
        int j = 0;
        for (int i = 0; i < y.length() && j < x.length(); i++)
            if (x[j] == y[i])
                j++;
        return j == x.length();
    }
    
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(),dictionary.end(), [](const auto& left , const auto& right){
            if(left.size() == right.size()){
                return left < right;
            }
            return left.size() > right.size();
        });
        for(int j = 0 ; j < dictionary.size() ; j++){
            if(isSubsequence(dictionary[j],s)){
                return dictionary[j];
            }
        }
        
        return "";
    }
};
class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool flag = true;
        for(int i = 0 ; i < s1.size() ; i++){
            if(s1[i] < s2[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            return true;
        }
        flag = true;
        for(int i = 0 ; i < s1.size() ; i++){
            if(s2[i] < s1[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            return true;
        }
        
        return false;
    }
};



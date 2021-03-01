class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int a[26] = {0};
        for(int i = 0 ; i < s1.size() ; i++){
            a[s1[i] - 'a']+=1;
        }
        
        for(int j = 0 ; j < s2.size() ; j++){
            string temp = s2.substr(j,s1.size());
            int b[26] = {0};
            for(int p = 0 ; p < temp.size() ; p++){
                b[temp[p] - 'a']+=1;        
            }
            bool flag = true;
            for(int i = 0 ; i < 26 ; i++){
                if(a[i] != b[i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return true;
            }
        }
        return false;
    }
    
};
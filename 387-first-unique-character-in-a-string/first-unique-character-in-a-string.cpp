class Solution {
public:
    int firstUniqChar(string s) {
        int a[26] = {};
        for(int i = 0 ; i < s.size() ; i++){
            a[s[i] - 'a']+=1;
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(a[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};
class Solution {
public:
    int maxVowels(string s, int k) {
        if (k == 0 || s.size() == 0) return 0;
        if(k >= s.size()){
            int temp = 0;
            for(int j = 0 ; j < s.size() ; j++){
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                    temp++;
                }
            }
            return temp;

        }
        int ans = 0;
         int temp = 0;
        for(int j = 0 ; j < k ; j++){
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                    temp++;
                }
            }
        ans = max(ans, temp);
        for(int j = k ; j < s.size() ; j++){
             if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                    temp++;
            }
             if(s[j-k] == 'a' || s[j-k] == 'e' || s[j-k] == 'i' || s[j-k] == 'o' || s[j-k] == 'u'){
                    temp--;
            }
            
            
            ans = max(ans, temp);
        }
        return ans;
    }
};
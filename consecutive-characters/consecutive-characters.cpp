class Solution {
public:
    
    int maxPower(string s) {
        char curr_char = 'a';
        int ans = 0;
        int curr_max = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == curr_char){
                curr_max++;
            }else{
                ans = max(ans,curr_max);
                curr_max = 1;
                curr_char = s[i];
            }
        }
         ans = max(ans,curr_max);
       return ans;
    }
};
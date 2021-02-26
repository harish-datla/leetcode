class Solution {
public:
    int minOperations(string s) {
        if(s.size() == 1)return 0;
        int ans1 = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(i%2 == s[i] - '0'){
                ans1++;
            }
        }
        int ans2 = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(i%2 != s[i] - '0'){
                ans2++;
            }
        }
        
        return min(ans1,ans2);
    }
};
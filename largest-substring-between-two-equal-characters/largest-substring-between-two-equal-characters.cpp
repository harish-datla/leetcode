class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int a[26] = {0};
        int ans = -1;
        for(int i = 0 ; i < s.size() ; i++){
            if(a[s[i] - 'a'] == 0)
                a[s[i] - 'a']=i+1;
            ans = max(ans,i - a[s[i] - 'a']);
        }
        return ans;
    }
};
class Solution {
public:
    int partitionString(string s) {
        int ans = 0;
        int a[26] = {0};
        for(int i = 0 ; i < s.size() ; i++){
            if(a[s[i] - 'a']){
                ans++;
                memset(a,0,sizeof(a));
                a[s[i] - 'a']++;
                continue;
            }else{
                a[s[i] - 'a']++;
            }
        }
        return ans+1;
    }
};
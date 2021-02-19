#include<bits/stdc++.h>
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> cnt(26,0);
        int start = 0,maxlen = 0;
        for(int i = 0 ; i < s.size() ; i++){
            cnt[s[i] - 'A']++;
            int x = 0;
            int maxi = 0;
            for(int i = 0 ; i < 26 ; i++){
                x+=cnt[i];
                maxi = max(maxi,cnt[i]);
            }
            x -= maxi;
            if(x > k){
                cnt[s[start] - 'A']--;
                start++;
            }
            maxlen = max(maxlen, i - start + 1);
        }
        return maxlen;
    }
};
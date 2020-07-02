class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<int,int> mp;
        map<int,int> k;
       int i = 0 ; int j = 0;
        int ans = 0;
        int count = 0;
        for(int j = 0 , i = 0 ; j < s.size() ; j++)
        {
            if(mp[s[j]])
            {
                i = max(mp[s[j]],i);
            }
            ans = max(ans,j-i+1);
            mp[s[j]] = j+1;
        }
        
        return ans;
        
    }
};
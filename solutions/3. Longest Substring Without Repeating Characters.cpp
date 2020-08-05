class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)return 0;
        if(s.size() == 1)return 1;
        unordered_map<char,int> index;
        int i= 0, j = 1;
        while(s[i] == s[j] && j < s.size()){
            i++;j++;
        }
        if(j == s.size())return 1;
        index[s[i]] = i;
        int maxi = INT_MIN;
        maxi = max(maxi,j-i+1);
        while( j < s.size() && i <s.size()){
            if((index[s[j]] > i && index[s[j]]!=j) || s[j] == s[i] ){
                i = index[s[j]]+1;
                index[s[j]] = j;
                if(i == j){j++;}
                continue;  
            }
            index[s[j]] = j;
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int maxlen = 0;
        int a[256];
        int temp = 0;
        memset(a,0,256*sizeof(a[0]));
        int last = 0;
        for(int i = 0 ; i < s.size() ; i++){
           if(a[s[i]]){
               i = a[s[i]]-1;
               //cout << s[i] << endl;
               memset(a,0,256*sizeof(a[0]));
               maxlen = max(maxlen,temp);
               temp = 0;
           }
            else{
                temp++;
                a[s[i]] = i+1;
            }
        }
        maxlen = max(temp,maxlen);
        return maxlen;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        int t = 0;
        while(t < haystack.size()){
            if(haystack.size() - t < needle.size()){
                return -1;
            }
            
            string s(haystack.begin() + t, haystack.begin() + t+needle.size());
            //cout << s << " " << needle << " " << t << endl;
            if(s == needle){
                return t;
            }
            t++;
        }
        
        return -1;
    }
};
class Solution {
public:
    int countHomogenous(string s) {
        long ans = 0;
        char curr_char = 'a';
        int i = 0;
        long curr_size = 0;
        long mod = 1000000007;
        while(i < s.size()){
            if(s[i] == curr_char){
                curr_size++;
            }else{
                ans= (ans%mod + (curr_size*(curr_size+1)/2)%mod)%mod ;
                curr_size = 1;
                curr_char = s[i];
            }
            i++;
        }
        ans= (ans%mod + (curr_size*(curr_size+1)/2)%mod)%mod ;
        return (int)ans;
    }
};
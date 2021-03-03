class Solution {
public:
    string baseNeg2(int N) {
        if(N == 0)return "0";
        string ans = "";
        while(N){
            //cout << N%(-2) << endl;
            if(N%-2 < 0){
                N = N-2;
            }
            ans+=(to_string(abs(N%(-2))));
            N = N/(-2);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
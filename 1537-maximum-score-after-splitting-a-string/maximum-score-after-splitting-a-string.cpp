class Solution {
public:
    int maxScore(string s) {
        vector<int> zeroes(s.size(),0);
        if(s[0] == '0')zeroes[0] = 1;
        for(int i = 1 ; i < s.size() ; i++){
            zeroes[i] = zeroes[i-1] +  (s[i] == '0');
        }
        // for(int i = 0 ; i < zeroes.size() ; i++){
        //     cout << zeroes[i] << " ";
        // }
        // cout << endl;
        int ans = INT_MIN;
        int ones = 0;
        for(int j = s.size() - 1 ; j > 0 ; j--){
            if(s[j] == '1'){
                ones+=1;
            }
            ans = max(ans, zeroes[j-1]+ones);
        }
        return ans;
    }
};
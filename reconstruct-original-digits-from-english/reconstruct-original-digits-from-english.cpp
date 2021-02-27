class Solution {
public:
    string originalDigits(string s) {
        vector<char> filter_order{'z','w','u','x','g','o','h','f','s','i'};
        vector<int> filter_index{0,2,4,6,8,1,3,5,7,9};
        vector<string> num{"zero","one","two","three","four","five","six","seven","eight","nine"};
        vector<int> letter_freq(26,0);
        for(int i = 0 ; i < s.size() ; i++){
            letter_freq[s[i] - 'a']++;
        }
        string ans = "";
        for(int i = 0 ; i < filter_order.size() ; i++){
            if(letter_freq[filter_order[i] - 'a']){
                int sub = letter_freq[filter_order[i] - 'a'];
                for(int p = 0 ; p < sub ; p++){
                    ans+=('0'+filter_index[i]);
                }
                for(int j = 0 ; j < num[filter_index[i]].size() ; j++){
                    letter_freq[num[filter_index[i]][j] - 'a']-=sub;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans; 
    }
};
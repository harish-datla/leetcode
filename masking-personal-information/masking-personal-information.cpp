class Solution {
public:
    string maskPII(string S) {
        vector<char> phone;
        bool isNo = true;
        for(int i = 0 ; i < S.size() ; i++){
            if(S[i] - '0' >= 0 && S[i] - '0' < 10 )
            { 
                phone.push_back(S[i]);
            }else if(S[i] == '+' || S[i] =='-' || S[i] =='(' || S[i] ==')' || S[i] ==' '){
                continue;
            }
            else{
                isNo = false;
                break;
            }
        }
        string ans = "";
        if(isNo){
            
                int n = phone.size();
                switch(n){
                    case 10:
                        ans+="***-***-";
                        break;
                    case 11:
                        ans+="+*-***-***-";
                        break;
                    case 12:
                        ans+="+**-***-***-";
                        break;
                    case 13:
                        ans+="+***-***-***-";
                        break;
                }
                ans+=phone[n-4];
                ans+=phone[n-3];
                ans+=phone[n-2];
                ans+=phone[n-1];
        }else{
            int i = S.size() - 1;
            while(S[i]!= '@'){
                ans+=tolower(S[i]);
                i--;
            }
            ans+='@';
            ans+=tolower(S[i-1]);
            ans+="*****";
            ans+=tolower(S[0]);
            reverse(ans.begin(),ans.end());
        }
        
        
        
        return ans;
    }
};
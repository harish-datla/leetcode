class Solution {
public:
    int getMaxLen(vector<int>& a) {
        int last_pos = -1;
        int first_pos = -1;
        int first_neg = -1;
        int last_neg = -1;
        int ans = 0;
        int sign = 1;
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] == 0){
                if(last_neg != -1 && first_neg != -1){
                   ans = max(ans,last_neg-first_neg); 
                }
                if(last_pos != -1 && first_pos != -1){
                   ans = max(ans,last_pos-first_pos+1);
                }
                if(first_neg != -1 && first_pos != -1){
                    ans = max(ans,abs(first_pos-first_neg+1));
                }
                if(last_pos != -1 && first_neg != -1){
                    ans = max(ans,abs(last_pos-first_neg+1));
                }
                first_pos = -1;
                last_pos = -1;
                first_neg = -1;
                last_neg = -1;
                sign = 1;
            }else if(sign == 1 && a[i] >0 ){
                if(first_pos == -1){
                    first_pos = i;
                }else{
                    last_pos = i;
                }
            }else if(sign == 1 && a[i] < 0){
                sign = 0;
                if(first_neg == -1){
                    first_neg = i;
                }else{
                    last_neg = i;
                }
            }else if(sign == 0 && a[i] > 0){
                if(first_neg == -1){
                    first_neg = i;
                }else{
                    last_neg = i;
                }
            }else if(sign ==0 && a[i] < 0){
                sign = 1;
                 if(first_pos == -1){
                    first_pos = i;
                }else{
                    last_pos = i;
                }
            }
            //cout << first_pos << " " << last_pos << " " << first_neg << " " << last_neg << endl;
            if(last_neg != -1 && first_neg != -1){
                ans = max(ans,last_neg-first_neg); 
            }
            if(last_pos != -1 && first_pos != -1){
                ans = max(ans,last_pos-first_pos+1);
            }
            if(first_neg != -1 && first_pos != -1){
            ans = max(ans,abs(first_pos-first_neg+1));
            }
            if(last_pos != -1 && first_neg != -1){
                ans = max(ans,abs(last_pos-first_neg+1));
            }
        }
        
        // if(last_neg != -1 && first_neg != -1){
        //     ans = max(ans,last_neg-first_neg); 
        // }
        // if(last_pos != -1 && first_pos != -1){
        //     ans = max(ans,last_pos-first_pos);
        // }
        if(first_pos != -1){
            ans = max(ans,1);
        }
        if(first_neg != -1 && first_pos != -1){
            ans = max(ans,abs(first_pos-first_neg+1));
        }
        return ans;
    }
};
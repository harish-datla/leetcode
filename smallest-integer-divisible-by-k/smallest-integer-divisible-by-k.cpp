class Solution {
public:
    int smallestRepunitDivByK(int K) {
        if(K%2 == 0)return -1;
        int last_mod = 1%K;
        if(last_mod == 0)return 1;
        for(int i = 2 ; i <= 100000 ; i++){
            if(((last_mod)*(10)+1)%K == 0){
                return i;
            }else{
                last_mod = ((last_mod)*(10) + 1)%K;
            }
        }
        return -1;
    }
};


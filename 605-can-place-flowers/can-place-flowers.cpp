class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int size = a.size();
        int c = 0;
        for(int i = 0 ; i < size  ; i++){
            if(a[i] == 0){
                c++;
                if(i==0)c++;
                if(i == size - 1)c++;
            }else{
                n = n - (c-1)/2;
                c=0;
                if(n <= 0)return true;
            }
        }
        n-=(c-1)/2;

        return n <= 0;
    }
};
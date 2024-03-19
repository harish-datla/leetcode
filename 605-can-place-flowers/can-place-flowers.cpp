class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int size = a.size();
        if(size == 1 && a[0] == 0)n--;
        for(int i = 0 ; i < size  ; i++){
            if(i == 0 && i+1 < size && a[i+1] == 0 && a[i] == 0){
                a[i] = 1;
                n--;
                continue;
            }
            if(i == size - 1 && i-1 > 0 && a[i-1] == 0 && a[i] == 0 ){
                a[i] = 1;
                n--;
                continue;
            }
            if( i-1 > 0 && i+1 < size && a[i-1] == 0 && a[i+1] == 0 && a[i] == 0){
                a[i] = 1;
                n--;
            }
        }

        return n <= 0;
    }
};
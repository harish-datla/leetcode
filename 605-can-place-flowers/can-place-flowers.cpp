class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int size = a.size();
        int c = 1, m = 0;
        for(int i = 0 ; i < size  ; i++){
            if(a[i] == 0)c++;
            else{
                m+=(c-1)/2; c = 0;
            }
        }
        c++;
        m+=(c-1)/2;

        return m>=n;
    }
};
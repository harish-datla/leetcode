class Solution {
public:
    int compareVersion(string v1, string v2) {
        int dots1 = 0;
        for(int i = 0 ; i < v1.size() ; i++){
            if(v1[i] == '.')dots1++;
        }
        int dots2 = 0;
        for(int i = 0 ; i < v2.size() ; i++){
            if(v2[i] == '.')dots2++;
        }
        if(dots1 > dots2){
            int i = 0;
            while(i<dots1-dots2){
                v2+=".0";
                i++;
            }
        }else{
            int i = 0;
            while(i<dots2-dots1){
                v1+=".0";
                i++;
            }
        }
        cout << v1 << endl;
        cout << v2 << endl;

        int i1 = 0;
        int i2 = 0;
        while(i1 < v1.size() && i2 < v2.size()){
                int x1 = 0;
            while(i1 < v1.size() && v1[i1] != '.' ){
                x1*=10;
                x1+=(v1[i1] - '0');
                i1++;
            }
                int x2 = 0;
                while(i2 < v2.size() && v2[i2] != '.' ){
                x2*=10;
                x2+=(v2[i2] - '0');
                i2++;
            }
            if(x1 < x2)return -1;
            if(x1 > x2) return 1;
            i1++;
            i2++;
        }
        return 0;
    }
};
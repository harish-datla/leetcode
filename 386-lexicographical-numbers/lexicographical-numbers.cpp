class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> out;
        int i = 0;
        int num = 1;
        while(i < n){
            out.push_back(num);i++;
            if(num*10 <= n)
                num*=10;
            else{
                if(num >= n)
                    num/=10;
                num++;
                while(num%10 == 0)num/=10;
            }
            
        }
        return out; 
    }
};
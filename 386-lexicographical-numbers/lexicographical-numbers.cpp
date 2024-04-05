class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> out;
        helper(1,n,out);
        return out; 
    }

    void helper(int i , int n , vector<int>& out){
        if(i > n) return;
        out.push_back(i);
        helper(i*10, n , out);
        if(i%10 != 9)helper(i+1,n,out);
    }
};
class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long left = 0; long right = sqrt(c) ;

        while(left <= right){
            long cur = left*left + right*right;
            if(cur == c)return true;
            if(cur < c)left++;
            if(cur > c)right--;
        }

        return false;
    }
};
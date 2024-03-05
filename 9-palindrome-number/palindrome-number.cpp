class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)return false;
       long int rev = 0;
       int org = x;
       while(x){
           rev = rev*10 + x%10;
           x/=10;
       }
       return rev==org;
    }
};
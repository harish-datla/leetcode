class Solution {
    public int scoreOfString(String s) {
        int ans = 0;
        for(int i=0;i<s.length()-1;i++){
            char x = s.charAt(i);
            char y = s.charAt(i+1);
            ans+=(x > y ? x-y : y-x);
            
        }

        return ans;
    }
}
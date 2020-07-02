class Solution {
    public int lengthOfLongestSubstring(String s) {
        int pos[] = new int[256];
        Arrays.fill(pos, -1);
        int p1 = 0, p2 = 0, ans = 0;
        
        while(p2 < s.length()) {
    
            if(pos[s.charAt(p2)] == -1) {
                pos[s.charAt(p2)] = p2;
                p2++;
                ans = Math.max(ans, p2-p1);
            } else {
                pos[s.charAt(p1)] = -1;
                p1++;
            }
        }
        return ans;
    }
}
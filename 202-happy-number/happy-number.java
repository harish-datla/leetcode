class Solution {
    public int sumOfSquares(int n){
        int ans = 0;
        while(n!=0){
            ans=ans+(n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    public boolean isHappy(int n) {
        Map<Integer,Integer> mp = new HashMap<>();
        while(true){
            n = sumOfSquares(n);
            if(n==1)return true;
            if(mp.containsKey(n))return false;
            mp.put(n, 1);
        }
    }
}
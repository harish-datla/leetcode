
class Solution {
public:
    int numSubarraysWithSum(vector<int>& A, int S) {
        int sum = 0, start = 0,ans = 0;
        for(int i = 0 ; i < A.size() ; i++){
            sum+=A[i];
            if(sum > S){
                for( ; start < i && sum > S ; ){
                    sum -=A[start];
                    start++;
                }       
            }
            if(sum == S){
                ans+=1;
                for(int x = start ; x < i && sum-A[x] == S ; x++){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};

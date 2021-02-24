
func numSubarraysWithSum(A []int, S int) int {
    ans , start,sum := 0,0,0
    for i := 0 ; i < len(A) ; i++{
        sum+=A[i]
        if sum > S{
            for ; sum > S && start < i ; {
                sum -= A[start]
                start+=1
                
            }
        }
         if sum == S {
            ans+=1
             x := start
             for ; x < i && sum - A[x] == S ; {
                 x+=1
                 ans+=1
             }
          
        }
    }
    return ans
    
}

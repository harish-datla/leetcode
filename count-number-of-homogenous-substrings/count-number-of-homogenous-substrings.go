func countHomogenous(s string) int {
    currSize,ans := 0,0
    mod := 1000000007
    length := len(s)
    currChar := byte('a')
    for i:= 0 ; i < length ; i++ {
        if(s[i] == currChar){
            currSize+=1
        }else{
            ans = (ans%mod + (currSize*(currSize+1)/2)%mod)%mod
            currSize = 1
            currChar = s[i]
        }
    }
    ans = (ans%mod + (currSize*(currSize+1)/2)%mod)%mod
    return ans
    
}
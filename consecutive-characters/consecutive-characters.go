func max(i,j int)int{
    if(i < j){
        return j
    }
    return i
}
func maxPower(s string) int {
    currChar := 'a'
    ans,currMax := 0,0
    length := len(s)
    for i := 0 ; i < length ; i++ {
        if s[i] == byte(currChar) {
            currMax++;
        }else{
            ans = max(ans,currMax)
            currMax = 1
            currChar = rune(s[i])
        }
    }
    ans = max(ans,currMax)
    return ans
}
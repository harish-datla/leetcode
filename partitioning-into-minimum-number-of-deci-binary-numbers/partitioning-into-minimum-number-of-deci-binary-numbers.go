func max(i,j int)int{
    if i < j {
        return j
    }
    return i
}
func minPartitions(n string) int {
    ans := -1
    length := len(n)
    for i := 0 ; i < length ; i++ {
        ans = max(ans,int(n[i]) - int('0'))
    } 
    return ans
}
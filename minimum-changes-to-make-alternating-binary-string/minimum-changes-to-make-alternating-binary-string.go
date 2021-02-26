func min(i,j int)int{
    if i < j {
        return i;
    }
    return j;
}
func minOperations(s string) int {
    ans1,ans2 := 0,0
    length := len(s)
    for i := 0 ; i < length ; i++ {
        if i%2 == int(s[i]) - int('0') {
            ans1++;
        }else{
            ans2++;
        }
    } 
    return min(ans1,ans2);
}
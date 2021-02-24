func max(i,j int)int{
    if i < j {
        return j;
    }
    return i;
}
func findMaxConsecutiveOnes(nums []int) int {
    curr_max,ans := 0,0
    length := len(nums)
    for i := 0 ; i < length ; i++ {
        if nums[i] == 1{
            curr_max++;
        }else{
            ans = max(ans,curr_max);
            curr_max = 0
        }
    } 
    ans = max(ans,curr_max);
    return ans;
}
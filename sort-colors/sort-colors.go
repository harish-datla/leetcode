
func sortColors(nums []int)  {
    i , j , k := 0,0,len(nums) - 1
    for ;j <= k; {
        if nums[j] == 0 {
            nums[j],nums[i] = nums[i],nums[j]
            j+=1
            i+=1
        }else if nums[j] == 1 {
            j+=1;
        }else{
            nums[j],nums[k] = nums[k],nums[j]
            k-=1
        }
    }
}
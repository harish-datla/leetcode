func moveZeroes(nums []int)  {
    idx := 0;
    for i:= 0 ; i < len(nums) ; i++ {
        if nums[i] != 0 { 
            if idx != i{
                nums[i],nums[idx] = nums[idx],nums[i]
            }
            idx = idx + 1
        } 
    }
}
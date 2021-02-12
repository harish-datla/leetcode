func twoSum(nums []int, target int) []int {
    mp := make(map[int]int)
    for i := 0 ; i < len(nums); i++ {
        if mp[target - nums[i]] > 0 {
            return []int{mp[target - nums[i]] - 1 , i}
        }
        mp[nums[i]] = i + 1;
    }
    return nil
}
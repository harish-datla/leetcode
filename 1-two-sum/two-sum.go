func twoSum(nums []int, target int) []int {
    mp := make(map[int]int)
    for i,val := range(nums){
        if val,ok := mp[target - val]; ok {
            return []int{val, i}
        }
        mp[val] = i;
    }
    
    return []int{}
}
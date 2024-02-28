class Solution {
    func singleNumber(_ nums: [Int]) -> Int {
        var ans = nums[0]
        for i in 1..<nums.count {
            ans ^= nums[i]
        }
        return ans
    }
}
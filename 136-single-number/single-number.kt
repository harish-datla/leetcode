class Solution {
    fun singleNumber(nums: IntArray): Int {
        var ans = nums[0]
        for(i in 1 until nums.size){
           ans = ans xor nums[i] 
        }
        return ans
    }
}
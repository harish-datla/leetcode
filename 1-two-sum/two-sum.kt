class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val mp = mutableMapOf<Int,Int>()
        for(i in 0..nums.size-1){
            if(mp.containsKey(target-nums[i])){
                return intArrayOf(mp[target-nums[i]]!!,i)
            }
            mp.put(nums[i],i)
        }
        return intArrayOf()
    }
}
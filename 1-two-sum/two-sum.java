class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> mp= new HashMap<>();
        int length = nums.length;
        for(int i = 0 ; i < length ; i++){
            if(mp.containsKey(target - nums[i])){
                return new int[]{i, mp.get(target-nums[i])};
            }
            mp.put(nums[i], i);
        }
        return new int[]{0,0};
    }
}
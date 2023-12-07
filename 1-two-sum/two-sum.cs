public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> map = new Dictionary<int, int>();

        for(int i = 0; i < nums.Length; i++){
            int number2 = target - nums[i];

            if(map.ContainsKey(number2)){
                return new int[] {i, map[number2]};
            }

            if(!map.ContainsKey(nums[i])){
                map.Add(nums[i], i);
            }
            
        }

        return null;
    }
}
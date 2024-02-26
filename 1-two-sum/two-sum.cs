public class Solution {
    public int[] TwoSum(int[] nums, int target) {
      Dictionary<int,int>  mp = new  Dictionary<int,int>();

      for(int i= 0 ; i < nums.Length ; i++){
          if(mp.ContainsKey(target - nums[i])){
              return new int[]{mp[target-nums[i]]  , i };
          }
          mp.TryAdd(nums[i],i);
      }

      return default;
    }
}
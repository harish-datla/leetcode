class Solution {
    public static void swap(int[] arr, int i , int j){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    public void moveZeroes(int[] nums) {
       int zero_idx = 0;
       for(int i = 0 ; i < nums.length ; i++){
         if(nums[i] != 0){
            swap(nums,i,zero_idx);
            zero_idx++;
         }
       } 
    }
}
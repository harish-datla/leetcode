class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function singleNumber($nums) {
        $ans = $nums[0];
        for($i = 1 ; $i<count($nums) ; $i++){
            $ans ^= $nums[$i];
        }
        return $ans;
    }
}
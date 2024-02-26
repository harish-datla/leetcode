class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function twoSum($nums, $target) {
        $n=count($nums);
        $map = [];
        for($i = 0 ; $i < count($nums) ; $i++){
            if(isset($map[$target - $nums[$i]])){
                return array($map[$target - $nums[$i]], $i);
            }
            $map[$nums[$i]] = $i;
        }
        return array();
    }
}
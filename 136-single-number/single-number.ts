function singleNumber(nums: number[]): number {
    let ans = nums[0];
    for(let i = 1 ; i < nums.length ; i++){
        ans ^= nums[i]
    }
    return ans;
};
# @param {Integer[]} nums
# @return {Integer}
def single_number(nums)
    ans = nums[0]
    nums[1..].each do |val|
        ans = ans^val
    end
    return ans
end
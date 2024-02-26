# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
    map = {}
    nums.each_with_index do |val,idx|
        if map.key?(target - nums[idx])
            return [map[target - nums[idx]], idx]
        end
        map[nums[idx]] = idx
    end
    return []
end
use std::collections::HashMap;
impl Solution {
    /// Finds two numbers in a vector that sum up to a target value.
    ///
    /// # Arguments
    ///
    /// * `nums` - A vector of integers.
    /// * `target` - The target sum.
    ///
    /// # Returns
    ///
    /// A vector containing the indices of the two numbers that sum up to `target`.
    /// If no such pair is found, an empty vector is returned.
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        // Use a HashMap to store the numbers encountered so far and their indices.
        // This allows for an O(n) time complexity solution because we can check
        // if the complement (target - current_number) exists in the map in O(1) on average.
        let mut map = HashMap::new();
        for i in (0..nums.len()){
            let key = target - nums[i];
            if let Some(&j) = map.get(&key){
                return vec![j as i32, i as i32];
            }
            map.insert(nums[i],i);
        }
        vec![]
    }
}

#[cfg(test)]
mod tests {
    use super::*; // To import Solution

    #[test]
    fn test_simple_case() {
        let nums = vec![2, 7, 11, 15];
        let target = 9;
        let expected = vec![0, 1];
        let result = Solution::two_sum(nums, target);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_repeated_numbers() {
        let nums = vec![3, 3];
        let target = 6;
        let expected = vec![0, 1];
        let result = Solution::two_sum(nums, target);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_no_pair_exists() {
        let nums = vec![1, 2, 3];
        let target = 7;
        let expected: Vec<i32> = vec![];
        let result = Solution::two_sum(nums, target);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_negative_numbers() {
        let nums = vec![-1, -3, 5, 7];
        let target = 4;
        let expected = vec![0, 2]; 
        let result = Solution::two_sum(nums, target);
        assert_eq!(result, expected);
    }
}
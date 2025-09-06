class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        int maxRobbedOverall = -1;

        // Case 1: Rob houses [0 .. n-2]
        {
            int prev = nums[0];
            int curr = max(nums[0], nums[1]);
            for (int i = 2; i < n - 1; i++) {
                int temp = curr;
                curr = max(nums[i] + prev, curr);
                prev = temp;
            }
            maxRobbedOverall = curr;
        }

        // Case 2: Rob houses [1 .. n-1]
        {
            int prev = nums[1];
            int curr = max(nums[1], nums[2]);
            for (int i = 3; i < n; i++) {
                int temp = curr;
                curr = max(nums[i] + prev, curr);
                prev = temp;
            }
            maxRobbedOverall = max(maxRobbedOverall, curr);
        }

        return maxRobbedOverall;
    }
};
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int result;
        if (nums.size() <= 4) return 0;
        int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX, min4 = INT_MAX;
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, max4 = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min1) {
                min4 = min3;
                min3 = min2;
                min2 = min1;
                min1 = nums[i];
            }
            else if (nums[i] < min2) {
                min4 = min3;
                min3 = min2;
                min2 = nums[i];
            }
            else if (nums[i] < min3) {
                min4 = min3;
                min3 = nums[i];
            }
            else if (nums[i] < min4) {
                min4 = nums[i];
            }
            if (nums[i] > max1) {
                max4 = max3;
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if (nums[i] > max2) {
                max4 = max3;
                max3 = max2;
                max2 = nums[i];                
            }
            else if (nums[i] > max3) {
                max4 = max3;
                max3 = nums[i];               
            }
            else if (nums[i] > max4) {
                max4 = nums[i];                
            }
        }
        
        result = min(max4-min1, max1-min4);
        result = min(max2-min3, result);
        result = min(max3-min2, result);
        return result;
    }
};
static const auto magic = []{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  return nullptr;
}();

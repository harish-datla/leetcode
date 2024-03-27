class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0, cur = 0, end = nums.size() - 1;
        while(cur <= end){
            cout << start << " " << cur <<  " " << end <<  endl;
            for(int i = 0 ; i < nums.size() ; i++){
                cout << nums[i] << " ";
            }
            cout << endl;
            if(nums[cur] == 0){
                swap(nums[start], nums[cur]);
                if(cur == start)cur++;
                start++;
            }else if(nums[cur] == 1){
                cur++;
            }else if(nums[cur] == 2){
                 swap(nums[end], nums[cur]);
                 end--;
            }
        }
    }
};
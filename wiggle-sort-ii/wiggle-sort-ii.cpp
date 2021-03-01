class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        if(nums.size() < 2) return;
        nth_element(nums.begin(), nums.begin() + nums.size()/2 , nums.end());
        int i = 1;
        int j = nums.size() %2 ? nums.size() - 1 : nums.size() - 2 ;
        int median = nums[nums.size()/2];
        for(int p = 0 ; p < nums.size() ; p++){
            if(nums[p] < median ){
                if(p >= j && p%2 == 0)continue;
                swap(nums[p--],nums[j]);
                j-=2;
            }else if(nums[p] > median){
                if(p <= i && p%2)continue;
                swap(nums[p--], nums[i]);
                i+=2;
            }
        }
        
    }
};




    


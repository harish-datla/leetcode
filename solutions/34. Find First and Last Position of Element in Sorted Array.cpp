const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        long long l = 0, r = nums.size() - 1 , m = (l+r)/2;
        vector<int> out({-1,-1});
        while(l <= r)
        {
            if(nums[m] == target)
            {
               if(m == 0)
               {
                   out[0] = 0;
                   break;
               }
                if(m > 0)
                {
                    if(nums[m-1] != target)
                    {
                        out[0] = m;
                        break;
                    }
                    else
                        r = m - 1, m = (l+r)/2;
                }
            }
            else if(nums[m] < target)
            {
                l = m + 1, m = (l+r)/2;
            }
            else if(nums[m] > target)
            {
                r = m - 1 , m = (l+r)/2;
            }
            
        }
        //cout << "here" << endl;
        l = 0, r = nums.size() - 1 , m = (l+r)/2;
        while(l <= r)
        {
            if(nums[m] == target)
            {
               if(m == nums.size() - 1)
               {
                    out[1] = nums.size() - 1;
                   break;
               }
                if(m < nums.size() - 1 )
                {
                    if(nums[m+1] != target)
                    {
                        out[1] = m;
                        break;
                    }
                    else
                        l = m + 1, m = (l+r)/2;
                }
            }
            else if(nums[m] < target)
            {
                l = m + 1, m = (l+r)/2;
            }
            else if(nums[m] > target)
            {
                r = m - 1 , m = (l+r)/2;
            }
            
        }
        
        return out;
    }
};





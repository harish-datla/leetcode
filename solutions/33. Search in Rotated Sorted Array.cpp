class Solution {
public:
    
    
    int search(vector<int>& a, int target) {
        
        int lo = 0; int hi = a.size() - 1;
        int idx = -1;
        while(lo < hi)
        {
            int mid = (lo + hi)/2;
            if(a[mid] > a[hi])lo = mid+1;
            else hi = mid ;
        }
        idx = lo;
        lo = 0 ; hi = a.size() - 1;
        
        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
            int realmid = (mid+idx)%a.size();
            if(a[realmid] == target)return realmid;
            else if(a[realmid] < target)lo = mid+1;
            else hi = mid - 1;
        }
        
        return -1;
        
    }
};
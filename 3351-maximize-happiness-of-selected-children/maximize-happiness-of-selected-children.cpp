class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        sort(happiness.begin(),happiness.end());
        long long inc = 0;
        int n = happiness.size();
        cout << happiness.size() - k  << endl;
        for(int i = n - 1 ; i >= n - k ; --i){
            if(happiness[i] - inc <= 0){
                break;
            }
            ans+=(happiness[i] - inc);
            inc++;
        }
        return ans;
    }
};
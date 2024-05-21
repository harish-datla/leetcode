class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<int,int>> w;
        for(int i = 0 ; i < quality.size() ; i++){
            w.push_back({quality[i], wage[i]});
        }
        sort(w.begin(),w.end(),[](pair<int,int>& left, pair<int,int>& right){
            return (double)left.second/left.first < (double)right.second/right.first;
        });
        double ans = INT_MAX;
        double quality_sum = 0;
        priority_queue<double> maxHeap;    
        for(int i = 0 ; i < w.size() ; i++){
            quality_sum+=w[i].first;
            maxHeap.push(w[i].first);
            
            if(maxHeap.size() > k){
                quality_sum-=maxHeap.top();
                maxHeap.pop();
            }
            if(maxHeap.size() == k){
                ans = min(ans, quality_sum*w[i].second/w[i].first);
            }
        }
        return ans;
        
    }
};
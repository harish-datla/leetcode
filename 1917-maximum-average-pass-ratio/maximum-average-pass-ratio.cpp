class Solution {
public:
    struct Compare{ 
        bool operator()(vector<int>& a, vector<int>&b){
            return (double) (a[0]+1)/ (double) (a[1]+1) - (a[0])/ (double) (a[1])  < (double) (b[0]+1)/ (double) (b[1]+1) - (double) b[0]/ (double) b[1] ;
        }
    };
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<vector<int>, vector<vector<int>>, Compare> pq(classes.begin(), classes.end());
        while(extraStudents > 0){
            vector<int> top = pq.top();
            pq.pop();
            top[0]+=1;
            top[1]+=1;
            pq.push(top);
            extraStudents--;
        }
        double percentage = 0;
        while(pq.size()){
            vector<int> top = pq.top();
            pq.pop();
            // cout << top[0] << " " << top[1] << endl;
            percentage += ((double) top[0]/ (double) top[1]);
        }
        percentage = (double)percentage/(double)classes.size();
        return percentage;
    }
};
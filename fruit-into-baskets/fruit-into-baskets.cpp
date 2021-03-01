class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int i = 0;
        int k = 0;
        int ans = 0;
        set<int> s;
        int left = 0;
        bool flag = true;
        while(i < int(tree.size())){
            s.insert(tree[i]);
            if(s.size() == 2 && !flag){
                left = i;
                flag = true;
                //cout << left << endl;
            }
            if(s.size() > 2){
                i = left;
                ans = max(ans,k);
                k = 0;
                flag = false;
                s.erase(s.begin(),s.end());
                continue;
            }
            k++;
            i++;
        }
        ans = max(ans,k);
        return ans;
    }
};
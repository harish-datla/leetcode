class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() <= 2)return 0;
       stack<int> s;
       int idx = 0;
       int water = 0;
       while(idx < height.size()){
          if(s.empty() || height[s.top()] > height[idx]){
            s.push(idx);
            idx++;
          }else{
            int pre = s.top();
            s.pop();
            if(!s.empty()){
                int minboundaryHeight = min(height[s.top()], height[idx]);
                water+=(minboundaryHeight - height[pre])*(idx - s.top() - 1);
            }
          }  
       } 
       return water;
    }
};
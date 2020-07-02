class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0, j = height.size() - 1;
        int out = INT_MIN;
        bool x = false;
        bool y = false;
        int p;
        while(i < j)
        {
            //cout << min(height[i],height[j])*(j-i) << " " << out << endl;
            if(min(height[i],height[j])*(j-i) > out)
            {
                out = min(height[i],height[j])*(j-i);
                if(height[i] == min(height[i],height[j]))
                {
                    p = height[j];
                    i++;
                    x = true;
                    y = false;
                }
                else
                {
                    p = height[i];
                    j--;
                    x = false;
                    y = true;
                }
            }
            else
            {
                if(x){
                    if(height[i] >p)
                    {
                        x = false;
                        y = true;
                        p = height[i];
                        
                        j--; 
                        //cout << p <<" " << height[j] << " " << height[i]<< " " << out<<  endl;
                    }
                    else
                    {
                        i++;
                    }
                    
                }
                else if(y){
                    if(height[j] >p)
                    {
                        y = false;
                        x = true;
                        p = height[j];
                        i++;            
                    }
                    else
                    {
                        j--;
                    }
                    
                }   
                    
            }
        }
        
        return out;
    }
};
class Solution {
public:
    std::string convert(std::string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        std::string ans;
        int zigzagCycle = 2 * (numRows - 1);
        int strSize = s.length();
        for(int i = 0; i < numRows; i++){
            for(int k = 0; i + k * zigzagCycle < strSize; k++){
                int idx = i + k * zigzagCycle;
                ans.push_back(s[idx]);
                int midIdx = (k + 1) * zigzagCycle - i;
                if(i != 0 && i != numRows - 1){
                    if(midIdx < strSize){
                        ans.push_back(s[midIdx]);
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
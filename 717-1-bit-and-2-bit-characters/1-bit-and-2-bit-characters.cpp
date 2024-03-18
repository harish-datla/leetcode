class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits, int idx = 0) {
        if(idx == (bits.size() - 1) && bits[idx] == 0)return true;
        if(idx > (bits.size() - 1)) return false;
        if(bits[idx] == 0)
            return isOneBitCharacter(bits, idx+1);
        if(bits[idx] == 1)
            return isOneBitCharacter(bits, idx+2);
        return true;    
    }
};
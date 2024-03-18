class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        return isOneBit(bits, 0);   
    }

    bool isOneBit(vector<int>& bits, int idx ){
        if(idx == (bits.size() - 1) && bits[idx] == 0)return true;
        if(idx == bits.size()) return false;
        if(bits[idx] == 0)
            return isOneBit(bits, idx+1);
        if(bits[idx] == 1)
            return isOneBit(bits, idx+2);
        return true; 
    }

};
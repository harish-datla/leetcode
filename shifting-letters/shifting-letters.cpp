class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        if(shifts.size() == 0)return S;
        if(shifts.size() == 1){
            S[0] = 'a' + (S[0] - 'a' + shifts[0])%26;
            return S;
        }
        for(int j = shifts.size() - 2 ; j >= 0 ; j--){
            shifts[j] = shifts[j]%26;
            shifts[j] = (shifts[j+1]%26+shifts[j]%26)%26;
        }
        
        for(int i = 0 ; i < S.size() ; i++){
            S[i] = 'a' + (S[i] - 'a' + shifts[i])%26;
            
        }
        return S;
    }
};
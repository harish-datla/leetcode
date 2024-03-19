class Solution {
public:
    bool equalFrequency(string word) {
       vector<int> a(26,0);
       int size = word.size();
       for(int i = 0 ; i < size ; i++){
            a[word[i] - 'a']++;
       } 
       for(int i = 0 ; i < 26 ; i++){
            unordered_set<int> s;
            if(a[i]){
                a[i]--;
                for(int j = 0 ; j < 26 ; j++){
                    if(a[j])
                        s.insert(a[j]);
                }
                if(s.size() == 1)return true;
                a[i]++;
            }
       }
       return false;
    }
};
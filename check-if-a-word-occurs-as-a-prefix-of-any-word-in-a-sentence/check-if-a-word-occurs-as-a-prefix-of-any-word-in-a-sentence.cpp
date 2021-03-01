#include<bits/stdc++.h>
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream ss(sentence);
        string word;
        int p = 0;
        while(ss >> word){
            p++;
            if(word.find(searchWord) == 0){
                return p;
            }
            
            
        }
        
        return -1;
    }
};
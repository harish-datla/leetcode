class Solution {
public:
    
    
    
    void rec(string digits, int k , vector<string>& out, unordered_map<int,vector<char>>& mp)
    {
        vector<string> temp;
        if(k == 0)
        {
            for(int i = 0 ; i < mp[digits[k] - '0'].size() ; i++)
            {
                
                string s(1,mp[digits[k] - '0'][i]);
                temp.push_back(s);
               
            }
            out = temp;
           temp.clear();
        }
        else if(k < digits.size())
        {
            for(int i = 0 ; i < mp[digits[k] - '0'].size() ; i++)
            {
                for(int j = 0 ; j < out.size() ; j++)
                {
                    string s = out[j]+mp[digits[k] - '0'][i];
                    temp.push_back(s);
                }
            }
            out = temp;
             temp.clear();
        }
        else if(k >= digits.size())
        {
            return;
        }
        rec(digits,k+1,out,mp);
        
        return ;
    }
    
    vector<string> letterCombinations(string digits) {
     vector<string> out;
        unordered_map<int,vector<char>> mp;
    vector<char> a = {'a','b','c'};
    mp[2] = a;
    a = {'d','e','f'};
    mp[3] = a;
    a = {'g','h','i'};
    mp[4] = a;
    a = {'j','k','l'};
    mp[5] = a;
    a = {'m','n','o'};
    mp[6] = a;
    a = {'p','q','r','s'};
    mp[7] = a;
    a = {'t','u','v'};
    mp[8] = a;
    a = {'w','x','y','z'};
    mp[9] = a;
     rec(digits,0, out,mp);
     return out;   
    }
};
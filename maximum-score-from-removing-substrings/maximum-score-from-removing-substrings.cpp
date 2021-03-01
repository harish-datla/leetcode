class Solution {
public:
    
    pair<string,int> trimString(string str, char a , char b ){
        stack<char> s;
        string out = "";
        int ret = 0;
        int i = 0;
        while( i < str.size()){
            if(!s.empty() && s.top() == a && str[i] == b){
                ret++;
                s.pop();
            }else{
                s.push(str[i]);
            }
            i++;
        }
        while(!s.empty()){
            out+=s.top();
            s.pop();
        }
        reverse(out.begin(),out.end());
        
        return {out,ret};
    }
    
    int maximumGain(string s, int x, int y) {
        char a = 'a';
        char b = 'b';
        if(x < y){
            swap(x,y);
            swap(a,b);
        }
        pair<string,int> ab;
        ab = trimString(s,a,b);
        pair<string,int> ba;
        ba = trimString(ab.first,b,a);
        
        return ab.second*x + ba.second*y;
    }
};


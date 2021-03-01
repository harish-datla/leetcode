class Solution {
public:
    string arrangeWords(string text) {
        if(text == "")return text;
        vector<pair<string,int>> v;
        text[0]= 'a' + text[0] - 'A';
        istringstream ss(text);
        string word;
        int i = 0;
        while(ss >> word){
            v.push_back({word,i});
            i++;
        }
        sort(v.begin(),v.end(), [](const auto& left, const auto& right){
            if(left.first.size() == right.first.size() )
                return left.second < right.second;  
            
            return left.first.size() < right.first.size() ;
        });
        
        string ans = "";
        v[0].first[0] = 'A' + v[0].first[0] - 'a';
        ans+=v[0].first;
        for(int i = 1 ; i < v.size() ; i++){
            //transform(v[i].first.begin(),v[i].first.begin());
            ans+=" ";
            ans+=v[i].first;
            
        }
        return ans;
    }
};
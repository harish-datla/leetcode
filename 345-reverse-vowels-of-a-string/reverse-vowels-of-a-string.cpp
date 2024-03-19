const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    string reverseVowels(string s) {
        auto isVowel = [](char c){
            return c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'||
                    c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
        };
        int i = 0 , j = s.size() - 1;
        while(i < j){
           if(!isVowel(s[i]))i++;
           else if(!isVowel(s[j]))j--;
           else{
            swap(s[i],s[j]);i++;j--;
           }
        }
        return s;
    }
};
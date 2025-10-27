class Solution {
public:
    string getSanitizedEmail(string email){
       string sanitizedEmail = "";
       for(int i = 0 ; i < email.size() ; i++){
            if(email[i] == '@' || email[i] == '+')break;
            if(email[i] == '.')continue;
            sanitizedEmail+=email[i];
       }
       string domainName = email.substr(email.find("@"));
       sanitizedEmail = sanitizedEmail + "@" + domainName;
       return  sanitizedEmail;
    }
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        for(int i = 0 ; i < emails.size() ; i++){
            s.insert(getSanitizedEmail(emails[i]));
        }
        return s.size();
    }
};
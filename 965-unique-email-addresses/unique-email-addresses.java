class Solution {

    public String getSanitizedEmail(String email){
        String sanitizedEmail = "";
        for(int i = 0 ; i < email.length() ; i++){
            char c = email.charAt(i);
            if(c == '+' || c == '@')break;
            if(c == '.')continue;
            sanitizedEmail+=c;
        }
        int indexOfAt = email.indexOf('@');
        sanitizedEmail = sanitizedEmail + email.substring(indexOfAt);
        return sanitizedEmail;
    }

    public int numUniqueEmails(String[] emails) {
        Set<String> s = new HashSet<>();
        for(int i = 0 ; i < emails.length ; i++){
           s.add(getSanitizedEmail(emails[i]));
        }
        return s.size();
    }
}
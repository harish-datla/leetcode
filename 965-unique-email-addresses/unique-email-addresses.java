class Solution {

    public String getSanitizedEmail(String email){
        String[] parts = email.split("@");
        String[] locals = parts[0].split("\\+");
        String localName = locals[0].replace(".", "");
        return localName + '@' + parts[1];
    }

    public int numUniqueEmails(String[] emails) {
        Set<String> s = new HashSet<>();
        for(int i = 0 ; i < emails.length ; i++){
           s.add(getSanitizedEmail(emails[i]));
        }
        return s.size();
    }
}
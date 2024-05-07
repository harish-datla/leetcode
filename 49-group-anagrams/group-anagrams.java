class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ans = new ArrayList<>();
        Map<String,Integer> mp = new HashMap<>();
        for(int i = 0 ; i < strs.length ; i++){
            char[] charArray = strs[i].toCharArray();
            Arrays.sort(charArray);
            String s = Arrays.toString(charArray);
            if(mp.get(s) == null){
                mp.put(s,ans.size());
                ans.add(new ArrayList<>());
            }
            ans.get(mp.get(s)).add(strs[i]);
        }
        return ans;
    }
}
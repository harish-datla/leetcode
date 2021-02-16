func lengthOfLongestSubstring(s string) int {
    mp := map[byte]int{}
    
    maxlen := 0
    temp := 0

    for i := 0 ; i < len(s) ; i++ {
        val , ok := mp[s[i]]
        //fmt.Println(i)
        if ok{
            i = val-1
            if(temp > maxlen){
                maxlen = temp
            }
            mp = make(map[byte]int)
            temp = 0
        }else{
            temp = temp + 1
            mp[s[i]] = i+1
        }
    }
    if(temp > maxlen){
                maxlen = temp
            }
    
    return maxlen
}
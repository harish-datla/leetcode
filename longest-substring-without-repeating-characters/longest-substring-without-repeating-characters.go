func lengthOfLongestSubstring(s string) int {
    mp := [128]int{}
    
    maxlen := 0
    temp := 0

    for i := 0 ; i < len(s) ; i++ {
        val  := mp[s[i]]
        //fmt.Println(i)
        if val > 0 {
            i = val-1
            if(temp > maxlen){
                maxlen = temp
            }
            for j := 0 ; j < 128 ; j++{
                mp[j] = 0
            }
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
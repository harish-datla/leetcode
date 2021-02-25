
func mergeAlternately(word1 string, word2 string) string {
    ans := make([]byte,len(word1) + len(word2))
    i := 0
    j := 0
    for ; i < len(word1) && i < len(word2) ; i++ {
        ans[j] = word1[i]
        ans[j+1]=word2[i]
        j += 2
    }
    
    for ; i < len(word1) ; i++ {
        ans[j] = word1[i]
        j += 1
    }
    for ; i < len(word2) ; i++ {
        ans[j] = word2[i]
        j+=1
    }
    return string(ans)
}
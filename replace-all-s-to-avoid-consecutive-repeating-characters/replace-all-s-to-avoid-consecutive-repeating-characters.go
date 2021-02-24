func modifyString(p string) string {
    if len(p) == 1 && rune(p[0]) == '?' {
        return "a"
    }
    s := []rune(p)
    length := len(s)
    for i := 0 ; i < length ; i++ {
        if s[i] == '?' {
            if i == 0 {
                for j := 0 ; j < 26 ; j++{
                    if s[i+1] != rune('a'+j) {
                        s[i] = rune('a'+j)
                    }
                }
            }else if i == length - 1 {
                for j := 0 ; j < 26 ; j++{
                    if s[i-1] != rune('a'+j) {
                        s[i] =rune('a'+j)
                    }
                }
            }else{
                for j := 0 ; j < 26 ; j++{
                    if s[i-1] != rune('a'+j) && s[i+1] != rune('a'+j) {
                        s[i] = rune('a'+j)
                    }
                }
            }
        }
    }
    
    return string(s)
}
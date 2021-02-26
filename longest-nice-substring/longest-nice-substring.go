func longestNiceSubstring(s string) string {
    ans,maxi := "",-1
    length := len(s)
    for i := 0 ; i < length ; i++ {
        for j := i ; j < length ; j++ {
            a := make([]int,26)
            for k := i ; k <= j ; k++ {
                if(int(s[k]) - int('a') >= 0 && int(s[k]) - int('a') <= 26) {
                    a[int(s[k]) - int('a')] = (a[int(s[k]) - int('a')] | (1 << 0) )
                } else if(int(s[k]) - int('A') >= 0 && int(s[k]) - int('A') <= 26){
                    a[int(s[k]) - int('A')] = (a[int(s[k]) - int('A')] | (1 << 1) ) 
                }
            } 
            flag := true
            for p := 0 ; p < 26 ; p++ {
                if(a[p] != 3 && a[p] != 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                if(j-i+1 > maxi){
                    ans = s[i:j+1]
                    maxi = j-i+1
                }
            }
        }
       
    }
     return ans
}
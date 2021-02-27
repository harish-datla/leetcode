func smallestRepunitDivByK(K int) int {
    if K%2 == 0 {
        return -1
    }
    last_mod := 1%K
    if last_mod == 0 {
        return 1
    }
    for i := 2 ; i <= K ; i++ {
        if ((last_mod)*(10)+1)%K == 0 {
            return i
        }else{
            last_mod = ((last_mod)*(10) + 1)%K
        }
    }
    return -1
}
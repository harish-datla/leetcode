import "sort"
import "strconv"
type sortRune []rune

func (s sortRune) Less(i,j int) bool{
    return s[i] < s[j]
}

func (s sortRune) Len()int{
    return len(s)
}

func (s sortRune) Swap(i,j int) {
    s[i],s[j] = s[j],s[i]
}



func originalDigits(s string) string {
    filter_order := []rune{'z','w','u','x','g','o','h','f','s','i'}
    filter_index := []int{0,2,4,6,8,1,3,5,7,9}
    num          := []string{"zero","one","two","three","four","five","six","seven","eight","nine"}
    letter_freq  := make([]int,26)
    for i := range letter_freq {
        letter_freq[i] = 0
    }
    
    for  i := 0 ; i < len(s) ; i++ {
        letter_freq[int(s[i]) - int('a')]+=1
    }
    ans := ""
    for i := 0 ; i < len(filter_order) ; i++ {
        if letter_freq[int(filter_order[i]) - int('a')] != 0 {
            sub := letter_freq[int(filter_order[i]) - int('a')]
            for p := 0 ; p < sub ; p++ {
                ans += strconv.Itoa(filter_index[i])
            }
            for j := 0 ; j < len(num[filter_index[i]]) ; j++ {
                letter_freq[int(num[filter_index[i]][j]) - int('a')]-=sub
            }
        }
    }
    ansRune := make(sortRune,0)
    for _,runeValue := range ans {
        ansRune = append(ansRune , runeValue)
    }
    sort.Sort(ansRune)
    answer := string(ansRune)
    return answer
}
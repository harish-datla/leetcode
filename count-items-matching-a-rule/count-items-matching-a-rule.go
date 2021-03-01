func countMatches(items [][]string, ruleKey string, ruleValue string) int {
    ans := 0
    for i := 0 ; i < len(items) ; i++ {
        if ("type" == ruleKey && items[i][0] == ruleValue ) || ("color" == ruleKey && items[i][1] == ruleValue ) || ("name" == ruleKey && items[i][2] == ruleValue )   {
            ans+=1
        }
    }
    return ans
}
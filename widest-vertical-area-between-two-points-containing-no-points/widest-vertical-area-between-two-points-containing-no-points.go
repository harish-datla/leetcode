import "sort"
type vec [][]int

func(v vec) Less(i,j int)bool{
    return v[i][0] < v[j][0]
}

func(v vec) Len()int{
    return len(v)
}

func(v vec) Swap(i,j int){
    v[i],v[j] = v[j],v[i]
}
func max(i,j int)int{
    if i < j {
        return j
    }
    return i
}
func maxWidthOfVerticalArea(points [][]int) int {
    sort.Sort(vec(points))
    length := len(points)
    ans := -1
    for i:= 0 ; i < length - 1 ; i++ {
        ans = max(ans,points[i+1][0]-points[i][0])
    }
    return ans
}
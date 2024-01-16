package main

import (
	"fmt"
	"sort"
)

func findContentChildren(g []int, s []int) int {
	sort.Sort(sort.Reverse(sort.IntSlice(g)))
	sort.Sort(sort.Reverse(sort.IntSlice(s)))

	ans := 0
	for i, j := 0, 0; i < len(s) && j < len(g); j++ {
		if s[i] >= g[j] {
			ans++
			i++
		}
	}
	return ans
}

// func main() {
// 	// Example usage
// 	g := []int{1, 2, 3}
// 	s := []int{1, 1}
// 	result := findContentChildren(g, s)
// 	fmt.Println(result)
// }

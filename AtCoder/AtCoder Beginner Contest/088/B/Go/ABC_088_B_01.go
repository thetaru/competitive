package main

import (
	"fmt"
	"sort"
)

func main() {
	alice := 0
	bob := 0
	var N int
	fmt.Scanf("%d", &N)
	a := make([]int, N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &a[i])
	}

	sort.Slice(a, func(i, j int) bool { return a[j] < a[i] })

	for i, n := range a {
		if i % 2 == 0 {
			alice += n
		} else {
			bob += n
		}
	}

	fmt.Printf("%d\n", alice - bob)
}
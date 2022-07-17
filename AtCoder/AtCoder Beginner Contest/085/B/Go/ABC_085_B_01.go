package main

import "fmt"

func RemoveDuplicateValuesFromSlice(s []int) []int {
	m := make(map[int]bool)
	unique := []int{}

	for _, elem := range s {
		if !m[elem] {
			m[elem] = true
			unique = append(unique, elem)
		}
	}
	return unique
}

func main() {
	var N int
	fmt.Scanf("%d", &N)
	d := make([]int, N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &d[i])
	}

	fmt.Printf("%d\n", len(RemoveDuplicateValuesFromSlice(d)))
}
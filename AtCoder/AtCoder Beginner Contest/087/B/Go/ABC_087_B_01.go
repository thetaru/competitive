package main

import "fmt"

func main() {
	var A, B, C, X int
	count := 0
	fmt.Scanf("%d", &A)
	fmt.Scanf("%d", &B)
	fmt.Scanf("%d", &C)
	fmt.Scanf("%d", &X)

	for i := 0; i < A+1; i++ {
		for j := 0; j < B+1; j++ {
			for k := 0; k < C+1; k++ {
				if 500*i + 100*j + 50*k == X {
					count++
				}
			}
		}
	}
	fmt.Printf("%d\n", count)
}

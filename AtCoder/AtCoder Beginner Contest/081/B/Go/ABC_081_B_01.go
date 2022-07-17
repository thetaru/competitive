package main

import "fmt"

func main() {
	var N int
	fmt.Scanf("%d", &N)
	A := make([]int, N)
	count := 0
	flg := 0
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A[i])
	}

	for flg == 0 {
		for i := 0; i < N; i++ {
			if A[i] % 2 != 0 {
				flg = 1
				break
			}
			A[i] = A[i] / 2
		}
		count++
	}
	fmt.Printf("%d\n", count-1)
}
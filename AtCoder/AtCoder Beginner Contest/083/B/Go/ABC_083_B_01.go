package main

import "fmt"

func calc_digit_sum(n int) int {
	digit_sum := 0
	for n != 0 {
		digit_sum += n % 10
		n = n / 10
	}
	return digit_sum
}

func main() {
	var N, A, B int
	fmt.Scanf("%d %d %d", &N, &A, &B)

	sum := 0

	for i := 1; i <= N; i++ {
		if A <= calc_digit_sum(i) && calc_digit_sum(i) <= B {
			sum += i
		}
	}
	fmt.Printf("%d\n", sum)
}
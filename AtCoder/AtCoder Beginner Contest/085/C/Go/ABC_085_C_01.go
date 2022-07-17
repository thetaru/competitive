package main

import "fmt"

func main() {
	var N, Y int
	fmt.Scanf("%d %d", &N, &Y)
	flg := 0
	result := [3]int{-1, -1, -1}

	for i := 0; i <= N && flg == 0; i++ {
		for j := 0; j <= N && flg == 0; j++ {
			k := N - (i + j)
			if k < 0 {
				continue
			}
			sum := 10000*i + 5000*j + 1000*k
			if (sum == Y) {
				flg = 1
				result[0] = i;
				result[1] = j;
				result[2] = k;
			}
		}
	}

	fmt.Printf("%d %d %d\n", result[0], result[1], result[2]);
}
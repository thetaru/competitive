package main

import (
	"fmt"
)

func abs(v int) int {
	if v > 0 {
		return v
	} else {
		return -v
	}
}

func main() {
	var N int
	fmt.Scanf("%d", &N)

	var (
		t_old int = 0
		x_old int = 0
		y_old int = 0
	)

	var t, x, y int
	var time, dist int
	for i := 0; i < N; i++ {
		fmt.Scanf("%d %d %d", &t, &x, &y)

		time = abs(t_old - t)
		dist = abs(x_old - x) + abs(y_old - y)

		if ((t + x + y) % 2 != 0 || time < dist) {
			fmt.Printf("No")
			return
		}

		t_old, x_old, y_old = t, x, y
	}
	fmt.Printf("Yes")
}
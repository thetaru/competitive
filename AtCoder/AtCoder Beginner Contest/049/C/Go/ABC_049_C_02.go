package main

import (
	"fmt"
	"strings"
)

func main() {
	var S string
	fmt.Scanf("%s", &S)

	var len_old, len_new int
	for {
		len_old = len(S)
		for _, v := range []string{"eraser", "erase", "dreamer", "dream"} {
			S = strings.TrimSuffix(S, v)
		}
		len_new = len(S)
		if len_old - len_new == 0 {break}
	}

	if len(S) == 0 {
		fmt.Printf("YES")
	} else {
		fmt.Printf("NO")
	}
}
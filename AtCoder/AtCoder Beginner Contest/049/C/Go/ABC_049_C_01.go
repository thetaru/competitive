package main

import (
	"fmt"
	"strings"
)

func main() {
	var S string
	fmt.Scanf("%s", &S)

	for _, v := range []string{"eraser", "erase", "dreamer", "dream"} {
		S = strings.Replace(s, v, "", -1)
	}

	if len(S) == 0 {
		fmt.Printf("YES")
	} else {
		fmt.Printf("NO")
	}
}
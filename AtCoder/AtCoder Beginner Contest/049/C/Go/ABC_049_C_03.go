package main

import (
	"fmt"
	"regexp"
)

func main() {
	var S string
	fmt.Scanf("%s", &S)

	r := regexp.MustCompile(`^(dream|dreamer|erase|eraser)*$`)
	if r.MatchString(S) {
		fmt.Printf("YES")
	} else {
		fmt.Printf("NO")
	}
}
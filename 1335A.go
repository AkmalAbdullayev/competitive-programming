package main

import (
	"fmt"
)

func main() {
	var i, n int
	fmt.Scanln(&i)
	ans := make([]int, i)

	for j := 0; j < i; j++ {
		fmt.Scanln(&n)
		ans[j] = (n - 1) / 2
	}

	for _, result := range ans {
		fmt.Println(result)
	}
}

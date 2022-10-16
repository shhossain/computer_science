package main

import (
	"fmt"
)

func main() {
	var n, v int

	fmt.Scan(&n)
	var arr [101]int

	for i := 1; i <= n; i++ {
		fmt.Scan(&v)
		arr[v] = i
	}
	for j := 1; j <= n; j++ {
		fmt.Printf("%d ", arr[j])
	}

}

package main

import (
	"fmt"
	"math"
)

func cherryPickup(grid [][]int) int {
	if len(grid) == 0 {
		return 0
	}

	dp := make([][][]int, len(grid)+len(grid[0])-1)
	for i := range dp {
		dp[i] = make([][]int, len(grid))
		for j := range dp[i] {
			dp[i][j] = make([]int, len(grid))
		}
	}

	for t := 0; t < len(dp); t++ {
		for c1 := 0; c1 < len(grid); c1++ {
			for c2 := 0; c2 < len(grid); c2++ {
				v1 := -1
				v2 := -1
				if t >= c1 && t-c1 < len(grid) && c1 < len(grid) {
					v1 = grid[t-c1][c1]
				}
				if t >= c2 && t-c2 < len(grid) && c2 < len(grid) {
					v2 = grid[t-c2][c2]
				}
				if v1 == -1 || v2 == -1 {
					dp[t][c1][c2] = math.MinInt
					continue
				}
				var prev []int
				if t > 0 {
					prev = append(prev, dp[t-1][c1][c2])
					if c1 > 0 {
						prev = append(prev, dp[t-1][c1-1][c2])
					}
					if c2 > 0 {
						prev = append(prev, dp[t-1][c1][c2-1])
					}
					if c1 > 0 && c2 > 0 {
						prev = append(prev, dp[t-1][c1-1][c2-1])
					}
				}
				dp[t][c1][c2] = max(prev...) + v1 + v2
				if v1 == 1 && c1 == c2 {
					dp[t][c1][c2]--
				}
			}
		}
	}
	res := dp[len(grid)+len(grid[0])-2][len(grid)-1][len(grid)-1]
	if res < 0 {
		return 0
	}
	return res
}

func max(a ...int) int {
	if len(a) == 0 {
		return 0
	}
	m := math.MinInt
	for _, n := range a {
		if n > m {
			m = n
		}
	}

	return m
}

func main() {
	fmt.Println(cherryPickup([][]int{{0, 1, -1}, {1, 0, -1}, {1, 1, 1}}))
}

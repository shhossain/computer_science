package main

import (
	"fmt"
	"sort"
)

func threeSum(nums []int) [][]int {
	sort.Slice(nums, func(i, j int) bool {
		return nums[i] < nums[j]
	})

	var result [][]int
	seen := map[string]bool{}
	for i := 0; i < len(nums); i++ {
		target := -nums[i]
		l := i + 1
		r := len(nums) - 1
		for l < r {
			val := nums[l] + nums[r]
			if val < target {
				l++
			} else if val > target {
				r--
			} else if val == target {
				resStr := fmt.Sprintf("%d,%d,%d", nums[i], nums[l], nums[r])
				if seen[resStr] {
					l++
					continue
				}
				result = append(result, []int{nums[i], nums[l], nums[r]})
				seen[resStr] = true
				l++
			}
		}
	}
	return result
}

func main() {
	fmt.Println(threeSum([]int{-1, 0, 1, 2, -1, -4})) // output: [[-1,-1,2],[-1,0,1]]
}

package main

import "fmt"

func main() {
	var arr = [3][4]int{
			{1,2,3,4},
			{4,5,6,7},
			{8,9,10,11}}

	var i, j int
	for i = 0; i < 3; i++ {
		for j = 0; j < 4; j++ {
			fmt.Printf("arr[%d][%d] = %d\n", i,j, arr[i][j])
		}
	}
}
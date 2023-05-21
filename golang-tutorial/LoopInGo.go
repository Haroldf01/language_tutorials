package main

import "fmt"

func main() {
	another_function()
}

func another_function() {
	count := 0
	for count < 10 {
		fmt.Println(count)
		count +=1
	}

	fmt.Println("---------Range----------")
	nums := []int{1,3,5,7,9,2,4,6,8}
	sum := 0
	for _, num := range nums {
		sum += num
	}
	fmt.Println("sum of range", sum)
}
package main
import "fmt"

func add(arr [5]int) int {
	var(
		i int
		sum int
	)
	for i=0; i<len(arr); i++ {
		sum += arr[i]
	}
	return sum
}

func main() {
	thisArrayWillBePassed := [5]int{8,9,6,5,4}
	sum := add(thisArrayWillBePassed)
	fmt.Println(sum)
}
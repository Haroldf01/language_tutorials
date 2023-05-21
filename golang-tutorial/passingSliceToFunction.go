package main
import "fmt"

func add(arr []int) int {
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
	thisArrayWillBePassed := []int{8,9,6,5,4,5,5,6,35,45,78}
	sum := add(thisArrayWillBePassed)
	fmt.Println(sum)
}

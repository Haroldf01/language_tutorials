package main

import "fmt"

func main() {
	test()
}

func test() {
	var amount float32
	var discount float32
	fmt.Scanln(&amount)

	if amount < 1000 {
		discount = amount*0.05
		fmt.Println("Discount amount is ", discount)
	} else if amount < 5000 {
		discount = amount*0.10
		fmt.Println("Discount amount is ", discount)
	} else {
		discount = amount*0.15
		fmt.Println("Discount amount is ", discount)
	}
	println("Net Payable", int(amount - discount))
}
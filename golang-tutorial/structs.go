package main

import "fmt"

type person struct {
	name string
	age int
}

func main() {
	// This is the object to the struct defined above
	st := person{name:"devnami",
				 age:4}
	s := &st
	
	fmt.Println(s.name)
	fmt.Println(s.age)
}
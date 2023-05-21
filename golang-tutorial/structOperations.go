package main

import "fmt"

type person struct {
	name string
	age int
	designation string
	no_of_people int
}

func main() {
	mukhtar := person{name:"Mukhtar",
					age:24,
					designation:"Coordinator",
					no_of_people:1}

	fmt.Println(mukhtar)
	//arrays()
	//slicing()
	multiDimentionalArray()
}

func arrays() {
	// initialize array using a single statement as follows −
	arr := [7]int{1,2,3,4,5,89,63}

	//Declaration and then init
	var arrName [5]int
	arrName[0] = 5
	arrName[1] = 4
	arrName[2] = 3
	arrName[3] = 2
	arrName[4] = 1

	//arrName = [5]int{6,7,8,9,0}

	fmt.Println("Arr array from 1-5")
	for i:=0; i<len(arr); i++ {
		fmt.Println(arr[i])
	}

	fmt.Println("arrName array from 6-0")
	for i:=0; i<len(arrName); i++ {
		fmt.Println(arrName[i])
	}
}

func slicing() {
	slicer := []string{"hey","what","you","doing"}
	slicer_to_String := slicer[0] + slicer[1] + slicer[2] + slicer[3]
	fmt.Println(slicer)
	fmt.Printf("%T is the type of slicer_to_String",
				slicer_to_String)
	fmt.Println(slicer_to_String)
}

func multiDimentionalArray() {
	var a = [3][4]int{
			{1,2,3,4},
			{4,5,6,7},
			{8,9,10,11}}

	fmt.Println("-------printing multi Dimentional Array--------")
	fmt.Println(a)
}
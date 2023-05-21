package main

func main() {
	test_2()
}

func test_1() (string, int, string) {
	var name string = "your_name"
	var age int = 21
	var something string = "This is something variable"

	return name, age, something
}

func test_2() {
	name_return, age_return, something_return := test_1()
	println(name_return, age_return, something_return)
}
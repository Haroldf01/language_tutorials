package main

import "fmt"

func main() {
    fmt.Println("Hello world")
    //add()
    //anotherFunc()
    //optional_data_type_test()
    dynamic_or_type_inference()
}

func anotherFunc() {
    var b string = "Could_be Anything"
    var age byte = 12
    fmt.Println(b)
    fmt.Println("age of b is ", age)
}

func add() {
    var a int64 = 9223372036854775803
    var b int64 = 4
    var f float32
    f = 65.56

    fmt.Println("Float variable", f)
    fmt.Printf("f is of type %T\n", f)

    var result int64 = a + b
    fmt.Println("Addition of int 64 is : ",result)
    fmt.Println("Addition function")
}

func optional_data_type_test() {
    // variable definition consists of:
    // var variable_list opetional_data_type
    var a, b, c = 155555555555, 45, 85 // Unpacking of python
    //var b = 45
    //var d = 61; var e = 89; // Another type of variable declaration
    var name = "Go Programming is kinda like fun"
    //Dynamic typing of variable of python
    fmt.Println("a", a, "b", b, "c", c, "name var", name)
}

func dynamic_or_type_inference() {
    // A dynamic type variable declaration requires the compiler to interpret the type of the variable based on the value passed to it.

    var i float32 = 65.89
    j := 45
    fmt.Println("Staticly types i variable ",i)
    fmt.Println("Dynamic Typed j variable", j)

    fmt.Printf("i is of type %T\n", i)
    fmt.Printf("j is of type %T\n", j)
}

package main

import "fmt"

func main() {
    var a, b, s = 3, 4, "This is a String"
    fmt.Println(a)
    fmt.Println(b)
    fmt.Println(s)

    fmt.Printf("a type %T\n", a)
    fmt.Printf("b type %T\n", b)
    fmt.Printf("s type %T\n", s)

    operators()
}

func operators() {
    a := 5
    b := &a
    fmt.Println("Address of a",b)
}

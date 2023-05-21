package main

import "fmt"

func main() {
    x := 15
    a := &x     // pointing to x. Memeory address
    fmt.Println(a)

    // if u want to read through memory address then use *
    fmt.Println(*a)

    //Changing value of x by using pointer to x.
    *a = 5
    fmt.Println(x)
    *a = *a**a
    fmt.Println(x)
    fmt.Println(*a)
}

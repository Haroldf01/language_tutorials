package main

import "fmt"

func main() {
    var a [2]string
    a[0] = "Python"
    a[1] = "Developer"

    fmt.Println(a[0],a[1])
    fmt.Println(a)

    var b[2] int
    b[0] = 1
    b[1] = 5
    fmt.Println(b)
}

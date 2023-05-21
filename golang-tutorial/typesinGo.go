package main

import "fmt"

func add(x, y float64) float64 {
    return x+y
}
func main() {
    var a, b = 5.6, 9.6

    fmt.Println(add(a, b))
    w1, w2 := "Hey", "there"
    fmt.Println(multipleReturn(w1,w2))
}

func multipleReturn(a, b string) (string, string) {
    return a,b
}

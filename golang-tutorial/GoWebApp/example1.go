package main

import ("fmt"
        "net/http")

func main() {
    http.HandleFunc("/",index_handler)
    http.HandleFunc("/about/",about_handler)
    http.ListenAndServe(":8000", nil)
}

func index_handler(w http.ResponseWriter, r *http.Request) {
    fmt.Fprintf(w, "Go is new to me")
}

func about_handler(w http.ResponseWriter, r *http.Request) {
    fmt.Fprintf(w, "about page")
}

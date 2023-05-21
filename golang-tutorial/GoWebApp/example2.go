//serving information back to the browser
package main

import ("fmt"
        "net/http")

// to add in html tags
func index_handler(w http.ResponseWriter, r *http.Request) {
    fmt.Fprintf(w, "<h1>Hey there</h1>")
    fmt.Fprintf(w, "<p>This is html paragraph</p>")
    fmt.Fprintf(w, "<p>...kind of smile huh</p>")
}
func main() {
    http.HandleFunc("/", index_handler)
    http.ListenAndServe(":8000", nil)
}

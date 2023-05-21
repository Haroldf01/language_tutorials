package main

import (
	"net/http"
	"io/ioutil"
	"fmt"
)

func main() {
	response, _ := http.Get("https://www.washingtonpost.com/news-sitemap-index.xml")
	bytes, _ := ioutil.ReadAll(response.Body)
	string_body := string(bytes)
	fmt.Println(string_body)
	response.Body.Close()
}
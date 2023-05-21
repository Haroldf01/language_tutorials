package main

import (
	"net/http"
	"io/ioutil"
	"encoding/xml"
	"fmt"
)

type SitemapIndex struct {
	Locations []Location `xml:"sitemap"`
}

type Location struct {
	Loc string `xml:"loc"`
}

// method for converting all to string type
func (l Location) String() string {
	return fmt.Sprintf(l.Loc)
}

func main() {
	response, _ := http.Get("https://www.washingtonpost.com/news-sitemap-index.xml")
	bytes, _ := ioutil.ReadAll(response.Body)
	response.Body.Close()

	var s SitemapIndex
	xml.Unmarshal(bytes, &s)
	//fmt.Println(s.Locations)

	// range return 2 values. 1st is Index value; 2nd is actual value
	for index, Location := range s.Locations {
		fmt.Printf("\n%d %s",index, Location)
	}
}
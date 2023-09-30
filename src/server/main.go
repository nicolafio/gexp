package main

import (
	"fmt"
	"net/http"
	"strconv"
)

const port = 8342

func hello(w http.ResponseWriter, req *http.Request) {
	fmt.Fprintf(w, "hello\n")
}

func main() {
	http.HandleFunc("/hello", hello)
	http.ListenAndServe(":"+strconv.Itoa(port), nil)
}

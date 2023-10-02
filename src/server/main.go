package main

import (
	"net/http"
	"strconv"
)

const port = 8342

func main() {
	http.HandleFunc("/signin", Signin)
	http.HandleFunc("/welcome", Welcome)
	http.HandleFunc("/hello", Hello)
	http.ListenAndServe(":"+strconv.Itoa(port), nil)
}

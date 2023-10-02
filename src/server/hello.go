package main

import (
	"fmt"
	"net/http"
)

// Simple endpoint to test that the server is running.
func Hello(w http.ResponseWriter, req *http.Request) {
	fmt.Fprintf(w, "hello\n")
}

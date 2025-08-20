package main

import (
	"fmt"
)

func main() {
	var num int
	for {
		fmt.Scan(&num)
		if num == 42 {
			break
		}
		fmt.Println(num)
	}
}
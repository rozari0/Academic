package main

import (
	"fmt"
)

func main() {
	var limit int
	fmt.Scan(&limit)
	for i := 0; i < limit; i++ {
		var num1 int
		var num2 int
		fmt.Scan(&num1)
		fmt.Scan(&num2)

		fmt.Println(num1 + num2)
	}
}

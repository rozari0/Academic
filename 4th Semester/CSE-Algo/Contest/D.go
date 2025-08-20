package main

import (
	"fmt"
)

func main() {
	var limit int
	fmt.Scan(&limit)
	for i := 0; i < limit; i++ {
		var num int
		fmt.Scan(&num)

		if num < 10{
			fmt.Println("Thanks for helping Chef!")
		}else {
			fmt.Println("-1")
		}
		
	}
}

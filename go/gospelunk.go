package main

import (
	"fmt"
	"strings"
)

func caveAdventure() {
	fmt.Println("You find yourself standing at the entrance of a dark cave.")
	fmt.Println("As you step inside, the cave entrance collapses behind you.")
	fmt.Println("You see two paths ahead. One leads to the left and the other to the right.")

	var choice string
	for {
		fmt.Print("Which path will you choose? (left/right): ")
		fmt.Scanln(&choice)
		choice = strings.ToLower(choice)
		if choice == "left" {
			fmt.Println("You cautiously proceed to the left path.")
			leftPath()
			break
		} else if choice == "right" {
			fmt.Println("You confidently choose the right path.")
			rightPath()
			break
		} else {
			fmt.Println("Invalid choice. Please enter 'left' or 'right'.")
		}
	}
}

func leftPath() {
	fmt.Println("You walk down the left path and find a sparkling gem.")
	fmt.Println("However, it is guarded by a fierce dragon!")
	fmt.Print("What would you like to do? (fight/run): ")

	var choice string
	for {
		fmt.Print("Your choice: ")
		fmt.Scanln(&choice)
		choice = strings.ToLower(choice)
		if choice == "fight" {
			fmt.Println("You attack the dragon with all your might!")
			fmt.Println("Despite a valiant effort, the dragon overwhelms you.")
			fmt.Println("Game Over!")
			break
		} else if choice == "run" {
			fmt.Println("You wisely decide to run away.")
			fmt.Println("You escape the cave and make it back to safety.")
			fmt.Println("Congratulations! You survived!")
			break
		} else {
			fmt.Println("Invalid choice. Please enter 'fight' or 'run'.")
		}
	}

	playAgain()
}

func rightPath() {
	fmt.Println("You venture down the right path and find a hidden treasure chest.")
	fmt.Println("You open the chest and discover a pile of gold!")
	fmt.Println("Congratulations! You found the treasure!")

	playAgain()
}

func playAgain() {
	var choice string
	for {
		fmt.Print("Would you like to play again? (yes/no): ")
		fmt.Scanln(&choice)
		choice = strings.ToLower(choice)
		if choice == "yes" {
			fmt.Println("Restarting the game...\n")
			caveAdventure()
			break
		} else if choice == "no" {
			fmt.Println("Thank you for playing! Goodbye.")
			break
		} else {
			fmt.Println("Invalid choice. Please enter 'yes' or 'no'.")
		}
	}
}

func main() {
	caveAdventure()
}

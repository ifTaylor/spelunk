import time

def print_delay(text, delay=1.5):
    print(text)
    time.sleep(delay)

def cave_adventure():
    print_delay("You find yourself standing at the entrance of a dark cave.")
    print_delay("As you step inside, the cave entrance collapses behind you.")
    print_delay("You see two paths ahead. One leads to the left and the other to the right.")

    while True:
        choice = input("Which path will you choose? (left/right): ")
        if choice.lower() == "left":
            print_delay("You cautiously proceed to the left path.")
            left_path()
            break
        elif choice.lower() == "right":
            print_delay("You confidently choose the right path.")
            right_path()
            break
        else:
            print_delay("Please enter a valid choice (left/right).")

def left_path():
    print_delay("You walk down the left path and find a sparkling gem.")
    print_delay("However, it is guarded by a fierce dragon!")
    print_delay("What would you like to do?")
    
    while True:
        choice = input("Fight or run away? (fight/run): ")
        if choice.lower() == "fight":
            print_delay("You attack the dragon with all your might!")
            print_delay("Despite a valiant effort, the dragon overwhelms you.")
            print_delay("Game Over!")
            play_again()
            break
        elif choice.lower() == "run":
            print_delay("You wisely decide to run away.")
            print_delay("You escape the cave and make it back to safety.")
            print_delay("Congratulations! You survived!")
            play_again()
            break
        else:
            print_delay("Please enter a valid choice (fight/run).")

def right_path():
    print_delay("You venture down the right path and find a hidden treasure chest.")
    print_delay("You open the chest and discover a pile of gold!")
    print_delay("Congratulations! You found the treasure!")
    play_again()

def play_again():
    choice = input("Would you like to play again? (yes/no): ")
    if choice.lower() == "yes":
        print_delay("Restarting the game...")
        cave_adventure()
    elif choice.lower() == "no":
        print_delay("Thank you for playing! Goodbye.")
    else:
        print_delay("Please enter a valid choice (yes/no).")
        play_again()

cave_adventure()

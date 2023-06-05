#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void printDelay(const std::string& text, double delay = 1.5) {
    std::cout << text << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(delay * 1000)));
}

void caveAdventure();

void leftPath();
void rightPath();

void playAgain();

void caveAdventure() {
    printDelay("You find yourself standing at the entrance of a dark cave.");
    printDelay("As you step inside, the cave entrance collapses behind you.");
    printDelay("You see two paths ahead. One leads to the left and the other to the right.");

    std::string choice;
    while (true) {
        std::cout << "Which path will you choose? (left/right): ";
        std::getline(std::cin, choice);
        if (choice == "left") {
            printDelay("You cautiously proceed to the left path.");
            leftPath();
            break;
        } else if (choice == "right") {
            printDelay("You confidently choose the right path.");
            rightPath();
            break;
        } else {
            printDelay("Please enter a valid choice (left/right).");
        }
    }
}

void leftPath() {
    printDelay("You walk down the left path and find a sparkling gem.");
    printDelay("However, it is guarded by a fierce dragon!");
    printDelay("What would you like to do?");

    std::string choice;
    while (true) {
        std::cout << "Fight or run away? (fight/run): ";
        std::getline(std::cin, choice);
        if (choice == "fight") {
            printDelay("You attack the dragon with all your might!");
            printDelay("Despite a valiant effort, the dragon overwhelms you.");
            printDelay("Game Over!");
            playAgain();
            break;
        } else if (choice == "run") {
            printDelay("You wisely decide to run away.");
            printDelay("You escape the cave and make it back to safety.");
            printDelay("Congratulations! You survived!");
            playAgain();
            break;
        } else {
            printDelay("Please enter a valid choice (fight/run).");
        }
    }
}

void rightPath() {
    printDelay("You venture down the right path and find a hidden treasure chest.");
    printDelay("You open the chest and discover a pile of gold!");
    printDelay("Congratulations! You found the treasure!");
    playAgain();
}

void playAgain() {
    std::string choice;
    std::cout << "Would you like to play again? (yes/no): ";
    std::getline(std::cin, choice);
    if (choice == "yes") {
        printDelay("Restarting the game...");
        caveAdventure();
    } else if (choice == "no") {
        printDelay("Thank you for playing! Goodbye.");
    } else {
        printDelay("Please enter a valid choice (yes/no).");
        playAgain();
    }
}

int main() {
    caveAdventure();
    return 0;
}

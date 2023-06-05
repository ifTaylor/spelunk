#include <stdio.h>
#include <string.h>

void caveAdventure() {
    printf("You find yourself standing at the entrance of a dark cave.\n");
    printf("As you step inside, the cave entrance collapses behind you.\n");
    printf("You see two paths ahead. One leads to the left and the other to the right.\n");

    char choice[10];
    do {
        printf("Which path will you choose? (left/right): ");
        scanf("%s", choice);
    } while (strcmp(choice, "left") != 0 && strcmp(choice, "right") != 0);

    if (strcmp(choice, "left") == 0) {
        printf("You cautiously proceed to the left path.\n");
        leftPath();
    }
    else {
        printf("You confidently choose the right path.\n");
        rightPath();
    }
}

void leftPath() {
    printf("You walk down the left path and find a sparkling gem.\n");
    printf("However, it is guarded by a fierce dragon!\n");
    printf("What would you like to do? (fight/run): ");

    char choice[10];
    do {
        printf("Your choice: ");
        scanf("%s", choice);
    } while (strcmp(choice, "fight") != 0 && strcmp(choice, "run") != 0);

    if (strcmp(choice, "fight") == 0) {
        printf("You attack the dragon with all your might!\n");
        printf("Despite a valiant effort, the dragon overwhelms you.\n");
        printf("Game Over!\n");
    }
    else {
        printf("You wisely decide to run away.\n");
        printf("You escape the cave and make it back to safety.\n");
        printf("Congratulations! You survived!\n");
    }

    playAgain();
}

void rightPath() {
    printf("You venture down the right path and find a hidden treasure chest.\n");
    printf("You open the chest and discover a pile of gold!\n");
    printf("Congratulations! You found the treasure!\n");

    playAgain();
}

void playAgain() {
    char choice[10];
    do {
        printf("Would you like to play again? (yes/no): ");
        scanf("%s", choice);
    } while (strcmp(choice, "yes") != 0 && strcmp(choice, "no") != 0);

    if (strcmp(choice, "yes") == 0) {
        printf("Restarting the game...\n\n");
        caveAdventure();
    }
    else {
        printf("Thank you for playing! Goodbye.\n");
    }
}

int main() {
    caveAdventure();
    return 0;
}

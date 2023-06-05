import java.util.Scanner;

public class JavaSpelunk {
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("You find yourself standing at the entrance of a dark cave.");
        System.out.println("As you step inside, the cave entrance collapses behind you.");
        System.out.println("You see two paths ahead. One leads to the left and the other to the right.");

        caveAdventure();
    }

    private static void caveAdventure() {
        String choice;
        do {
            System.out.print("Which path will you choose? (left/right): ");
            choice = scanner.nextLine().toLowerCase();
        } while (!choice.equals("left") && !choice.equals("right"));

        if (choice.equals("left")) {
            System.out.println("You cautiously proceed to the left path.");
            leftPath();
        } else {
            System.out.println("You confidently choose the right path.");
            rightPath();
        }
    }

    private static void leftPath() {
        System.out.println("You walk down the left path and find a sparkling gem.");
        System.out.println("However, it is guarded by a fierce dragon!");
        System.out.println("What would you like to do? (fight/run)");

        String choice;
        do {
            System.out.print("Your choice: ");
            choice = scanner.nextLine().toLowerCase();
        } while (!choice.equals("fight") && !choice.equals("run"));

        if (choice.equals("fight")) {
            System.out.println("You attack the dragon with all your might!");
            System.out.println("Despite a valiant effort, the dragon overwhelms you.");
            System.out.println("Game Over!");
        } else {
            System.out.println("You wisely decide to run away.");
            System.out.println("You escape the cave and make it back to safety.");
            System.out.println("Congratulations! You survived!");
        }

        playAgain();
    }

    private static void rightPath() {
        System.out.println("You venture down the right path and find a hidden treasure chest.");
        System.out.println("You open the chest and discover a pile of gold!");
        System.out.println("Congratulations! You found the treasure!");

        playAgain();
    }

    private static void playAgain() {
        String choice;
        do {
            System.out.print("Would you like to play again? (yes/no): ");
            choice = scanner.nextLine().toLowerCase();
        } while (!choice.equals("yes") && !choice.equals("no"));

        if (choice.equals("yes")) {
            System.out.println("Restarting the game...");
            System.out.println();
            caveAdventure();
        } else {
            System.out.println("Thank you for playing! Goodbye.");
        }
    }
}

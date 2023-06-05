using System;

class Spelunk
{
    static void Main()
    {
        Console.WriteLine("You find yourself standing at the entrance of a dark cave.");
        Console.WriteLine("As you step inside, the cave entrance collapses behind you.");
        Console.WriteLine("You see two paths ahead. One leads to the left and the other to the right.");

        CaveAdventure();
    }

    static void CaveAdventure()
    {
        string choice;
        do
        {
            Console.Write("Which path will you choose? (left/right): ");
            choice = Console.ReadLine().ToLower();
        } while (choice != "left" && choice != "right");

        if (choice == "left")
        {
            Console.WriteLine("You cautiously proceed to the left path.");
            LeftPath();
        }
        else
        {
            Console.WriteLine("You confidently choose the right path.");
            RightPath();
        }
    }

    static void LeftPath()
    {
        Console.WriteLine("You walk down the left path and find a sparkling gem.");
        Console.WriteLine("However, it is guarded by a fierce dragon!");
        Console.WriteLine("What would you like to do? (fight/run)");

        string choice;
        do
        {
            Console.Write("Your choice: ");
            choice = Console.ReadLine().ToLower();
        } while (choice != "fight" && choice != "run");

        if (choice == "fight")
        {
            Console.WriteLine("You attack the dragon with all your might!");
            Console.WriteLine("Despite a valiant effort, the dragon overwhelms you.");
            Console.WriteLine("Game Over!");
        }
        else
        {
            Console.WriteLine("You wisely decide to run away.");
            Console.WriteLine("You escape the cave and make it back to safety.");
            Console.WriteLine("Congratulations! You survived!");
        }

        PlayAgain();
    }

    static void RightPath()
    {
        Console.WriteLine("You venture down the right path and find a hidden treasure chest.");
        Console.WriteLine("You open the chest and discover a pile of gold!");
        Console.WriteLine("Congratulations! You found the treasure!");

        PlayAgain();
    }

    static void PlayAgain()
    {
        string choice;
        do
        {
            Console.Write("Would you like to play again? (yes/no): ");
            choice = Console.ReadLine().ToLower();
        } while (choice != "yes" && choice != "no");

        if (choice == "yes")
        {
            Console.WriteLine("Restarting the game...");
            Console.WriteLine();
            CaveAdventure();
        }
        else
        {
            Console.WriteLine("Thank you for playing! Goodbye.");
        }
    }
}

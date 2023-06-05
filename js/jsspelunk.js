function printDelay(text, delay = 1500) {
    console.log(text);
    return new Promise(resolve => setTimeout(resolve, delay));
  }
  
  async function caveAdventure() {
    await printDelay("You find yourself standing at the entrance of a dark cave.");
    await printDelay("As you step inside, the cave entrance collapses behind you.");
    await printDelay("You see two paths ahead. One leads to the left and the other to the right.");
  
    while (true) {
      const choice = prompt("Which path will you choose? (left/right)");
      if (choice.toLowerCase() === "left") {
        await printDelay("You cautiously proceed to the left path.");
        await leftPath();
        break;
      } else if (choice.toLowerCase() === "right") {
        await printDelay("You confidently choose the right path.");
        await rightPath();
        break;
      } else {
        await printDelay("Please enter a valid choice (left/right).");
      }
    }
  }
  
  async function leftPath() {
    await printDelay("You walk down the left path and find a sparkling gem.");
    await printDelay("However, it is guarded by a fierce dragon!");
    await printDelay("What would you like to do?");
  
    while (true) {
      const choice = prompt("Fight or run away? (fight/run)");
      if (choice.toLowerCase() === "fight") {
        await printDelay("You attack the dragon with all your might!");
        await printDelay("Despite a valiant effort, the dragon overwhelms you.");
        await printDelay("Game Over!");
        await playAgain();
        break;
      } else if (choice.toLowerCase() === "run") {
        await printDelay("You wisely decide to run away.");
        await printDelay("You escape the cave and make it back to safety.");
        await printDelay("Congratulations! You survived!");
        await playAgain();
        break;
      } else {
        await printDelay("Please enter a valid choice (fight/run).");
      }
    }
  }
  
  async function rightPath() {
    await printDelay("You venture down the right path and find a hidden treasure chest.");
    await printDelay("You open the chest and discover a pile of gold!");
    await printDelay("Congratulations! You found the treasure!");
    await playAgain();
  }
  
  async function playAgain() {
    const choice = prompt("Would you like to play again? (yes/no)");
    if (choice.toLowerCase() === "yes") {
      await printDelay("Restarting the game...");
      await caveAdventure();
    } else if (choice.toLowerCase() === "no") {
      await printDelay("Thank you for playing! Goodbye.");
    } else {
      await printDelay("Please enter a valid choice (yes/no).");
      await playAgain();
    }
  }
  
  caveAdventure();
  
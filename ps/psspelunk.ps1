function CaveAdventure {
    Write-Host "You find yourself standing at the entrance of a dark cave."
    Write-Host "As you step inside, the cave entrance collapses behind you."
    Write-Host "You see two paths ahead. One leads to the left and the other to the right."

    while ($true) {
        $choice = Read-Host "Which path will you choose? (left/right)"
        $choice = $choice.ToLower()

        if ($choice -eq "left") {
            Write-Host "You cautiously proceed to the left path."
            LeftPath
            break
        }
        elseif ($choice -eq "right") {
            Write-Host "You confidently choose the right path."
            RightPath
            break
        }
        else {
            Write-Host "Please enter a valid choice (left/right)."
        }
    }
}

function LeftPath {
    Write-Host "You walk down the left path and find a sparkling gem."
    Write-Host "However, it is guarded by a fierce dragon!"
    Write-Host "What would you like to do? (fight/run)"

    while ($true) {
        $choice = Read-Host "Your choice"
        $choice = $choice.ToLower()

        if ($choice -eq "fight") {
            Write-Host "You attack the dragon with all your might!"
            Write-Host "Despite a valiant effort, the dragon overwhelms you."
            Write-Host "Game Over!"
            PlayAgain
            break
        }
        elseif ($choice -eq "run") {
            Write-Host "You wisely decide to run away."
            Write-Host "You escape the cave and make it back to safety."
            Write-Host "Congratulations! You survived!"
            PlayAgain
            break
        }
        else {
            Write-Host "Please enter a valid choice (fight/run)."
        }
    }
}

function RightPath {
    Write-Host "You venture down the right path and find a hidden treasure chest."
    Write-Host "You open the chest and discover a pile of gold!"
    Write-Host "Congratulations! You found the treasure!"
    PlayAgain
}

function PlayAgain {
    while ($true) {
        $choice = Read-Host "Would you like to play again? (yes/no)"
        $choice = $choice.ToLower()

        if ($choice -eq "yes") {
            Write-Host "Restarting the game..."
            Write-Host ""
            CaveAdventure
            break
        }
        elseif ($choice -eq "no") {
            Write-Host "Thank you for playing! Goodbye."
            break
        }
        else {
            Write-Host "Please enter a valid choice (yes/no)."
        }
    }
}

CaveAdventure

# Guess or Lose

A simple console-based Number Guessing Game built using C++.

The game asks the player to enter their name and deposit an initial amount. The player then places a bid and guesses a random number between 1 and 10.

If the guess is correct, the player wins. Otherwise, the bid amount gets deducted from their balance.

## Features
- Enter player name
- Set initial balance
- Place a bid
- Guess a number between 1 and 10
- Win or lose based on the guess
- Track remaining balance
- Play again option

## Built With
- C++
- VS Code
- GCC Compiler


## How to Win?

- Enter a number between 1 and 10.
- If your guess matches the randomly generated number, you win 10 times your bid amount.
- If your guess is incorrect, your bid amount is deducted from your balance.

**Tip:** Every number has an equal 10% chance of being selected. There is no guaranteed winning number. Good luck! 

## What I Learned
While building this project, I practised:
- Variables and data types
- If-else statements
- Loops
- Functions
- Random number generation
- Taking user input

## How to Run

Compile the program:

```bash
g++ NGG.cpp -o NGG.exe
```

Run it on Windows:

```powershell
.\NGG.exe
```

## Author

Kashish Gupta
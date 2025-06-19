# 🎯 Number Guessing Game (C++)
A simple console-based number guessing game built with C++. The computer randomly selects a number between 1 and 100, and the player has 7 attempts to guess it.

🛠 Features
Random number generation using rand() and srand()

User input with feedback (Too low, Too high, Correct!)

Attempt limit (7 tries)

Clean and interactive console output


🧩 Game Rules
The program randomly selects a number between 1 and 100.

You have 7 chances to guess the number.

After each guess, you'll receive feedback:

📉 "Too low!" — if your guess is smaller than the number.

📈 "Too high!" — if your guess is greater than the number.

✅ "Correct!" — if you guess it right.

If you fail to guess within 7 tries, the correct number is revealed.


Congratulations! You guessed the correct number: 67
📁 Files
File Name	Description
main.cpp	Main source code for the game
README.md	This documentation file

📚 Concepts Used
#include <cstdlib> — for rand() and srand()

#include <ctime> — to seed randomness using time(0)

if-else conditions

while loop

User input with cin

Constants and variables

✅ To-Do Ideas
 Add difficulty levels (easy/medium/hard)

 Keep score or track best attempts

 Replay option after game ends

👤 Author
Shérif ✨
You can edit this section to include GitHub/LinkedIn or a personal profile link

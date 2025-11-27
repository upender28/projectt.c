Hangman Game in C — README
1. Abstract

The Hangman Game is a simple console-based word-guessing game implemented in the C programming language.
A random word is selected from a predefined list, and the player must guess the letters within a limited number of attempts.
The project demonstrates basic C concepts such as loops, arrays, strings, conditionals, and user input handling.

2. Features of the Program

Random selection of a word from a list

Displays the current guess progress (e.g., _ a _ _ m a n)

Tracks incorrect attempts

Prevents repeated letter guesses

Simple and clean terminal interface

Win/loss result at the end

Fully written in standard C (no external libraries)

3. Technical Requirements
Software Requirements

GCC compiler (or any C compiler such as Clang, MinGW, Turbo C, etc.)

A terminal/command prompt

Hardware Requirements

Any standard machine capable of running C code

1 GB RAM or more

A keyboard for input

4. Functional Explanation

The program initializes a list of possible words.

A random word is selected.

An array of underscores is displayed to represent unknown letters.

The player inputs a letter each turn.

If the guess is correct, the letter is revealed in the word.

If incorrect, the wrong-attempt count increases.

The game ends when:

All letters are guessed (win), or

Maximum attempts are exceeded (lose)

5. How to Run the C Program
Compile
gcc hangman.c -o hangman

Run
./hangman


On Windows (MinGW):

gcc hangman.c -o hangman.exe
hangman.exe

<img width="682" height="242" alt="Screenshot 2025-11-27 095625" src="https://github.com/user-attachments/assets/35d10e45-e67b-4a67-8e1a-2438f5f3f805" />
<img width="323" height="168" alt="Screenshot 2025-11-27 095617" src="https://github.com/user-attachments/assets/0be5b70e-2d7e-46c8-9ac9-47f4d407ab0c" />
<img width="303" height="160" alt="Screenshot 2025-11-27 095610" src="https://github.com/user-attachments/assets/fca68d28-8d83-4f46-9417-8faf08f36ba3" />
<img width="286" height="167" alt="Screenshot 2025-11-27 095601" src="https://github.com/user-attachments/assets/8e48dbd7-51b5-4acd-8bb9-ef739430d4cb" />
<img width="304" height="210" alt="Screenshot 2025-11-27 095551" src="https://github.com/user-attachments/assets/7fb17fec-93ea-42be-be01-360975e2b939" />

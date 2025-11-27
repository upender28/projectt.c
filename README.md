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


<img width="508" height="205" alt="Screenshot 2025-11-25 223134" src="https://github.com/user-attachments/assets/d7c4b97f-45c7-4826-810d-7ee475b69e51" />
<img width="433" height="153" alt="Screenshot 2025-11-25 223157" src="https://github.com/user-attachments/assets/30975ace-088a-4dd4-a3e1-ce0184e1ea7d" />
<img width="704" height="271" alt="Screenshot 2025-11-25 223221" src="https://github.com/user-attachments/assets/b50dc4d5-de13-4853-8315-f6c089227cf2" />
<img width="690" height="281" alt="Screenshot 2025-11-25 223244" src="https://github.com/user-attachments/assets/c4c20d5a-0bcc-49ad-9d6e-4b20a0980ed6" />
<img width="560" height="253" alt="Screenshot 2025-11-25 223309" src="https://github.com/user-attachments/assets/95720f7d-7387-4bca-b264-df7925d7fbe5" />
<img width="493" height="405" alt="Screenshot 2025-11-25 223334" src="https://github.com/user-attachments/assets/bfac2693-df01-48fc-a875-7aa3bc286bb6" />
<img width="490" height="228" alt="Screenshot 2025-11-25 223347" src="https://github.com/user-attachments/assets/def2a3d8-137d-4277-8ec3-e31935fdfa38" />


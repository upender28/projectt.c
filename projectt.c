#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_WORD_LEN 32
#define MAX_TRIES 6

int main() {
    const char *words[] = {
        "computer", "hangman", "programming", "science",
        "keyboard", "internet", "variable", "function"
    };
    int wordCount = sizeof(words) / sizeof(words[0]);

    srand((unsigned)time(NULL));
    const char *secret = words[rand() % wordCount];

    int len = strlen(secret);
    char guessed[MAX_WORD_LEN];
    int tries = 0, correct = 0;
    int used[26] = {0};

    for (int i = 0; i < len; i++)
        guessed[i] = '_';
    guessed[len] = '\0';

    printf("=== Hangman Game ===\n");

    while (tries < MAX_TRIES && correct < len) {
        printf("\nWord: ");
        for (int i = 0; i < len; i++)
            printf("%c ", guessed[i]);

        printf("\nWrong tries: %d/%d\n", tries, MAX_TRIES);

        printf("Used letters: ");
        for (int i = 0; i < 26; i++)
            if (used[i]) printf("%c ", 'a' + i);
        printf("\n");

        printf("Enter a letter: ");
        char ch;
        scanf(" %c", &ch);
        ch = tolower(ch);

        if (!isalpha(ch)) {
            printf("Invalid input.\n");
            continue;
        }

        if (used[ch - 'a']) {
            printf("Already used.\n");
            continue;
        }

        used[ch - 'a'] = 1;

        int found = 0;
        for (int i = 0; i < len; i++) {
            if (secret[i] == ch && guessed[i] == '_') {
                guessed[i] = ch;
                correct++;
                found = 1;
            }
        }

        if (!found) {
            tries++;
            printf("Wrong guess!\n");
        } else {
            printf("Correct!\n");
        }
    }

    if (correct == len) {
        printf("\nYou win! The word was \"%s\".\n", secret);
    } else {
        printf("\nGame over! The word was \"%s\".\n", secret);
    }

    return 0;
}

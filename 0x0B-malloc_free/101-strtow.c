#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    // First, count the number of words in the string
    int num_words = 0;
    char *p = str;
    while (*p != '\0') {
        // Skip over any initial spaces
        while (*p == ' ') {
            p++;
        }

        if (*p != '\0') {
            // We've found the start of a new word
            num_words++;

            // Skip over the rest of the word
            while (*p != ' ' && *p != '\0') {
                p++;
            }
        }
    }

    // Allocate memory for the array of words (plus one extra element for the NULL terminator)
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    // Now, extract each word from the string and store it in the array
    int i = 0;
    p = str;
    while (*p != '\0') {
        // Skip over any initial spaces
        while (*p == ' ') {
            p++;
        }

        if (*p != '\0') {
            // We've found the start of a new word
            char *start = p;

            // Find the end of the word
            while (*p != ' ' && *p != '\0') {
                p++;
            }

            // Allocate memory for the word
            int word_len = p - start;
            char *word = (char *)malloc((word_len + 1) * sizeof(char));
            if (word == NULL) {
                // Free memory for any previously allocated words
                for (int j = 0; j < i; j++) {
                    free(words[j]);
                }
                free(words);
                return NULL;
            }

            // Copy the word into the newly allocated memory
            strncpy(word, start, word_len);
            word[word_len] = '\0';
            words[i++] = word;
        }
    }

    words[num_words] = NULL;
    return words;
}


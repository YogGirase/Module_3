//15.Write a program in C to find the largest and smallest words in a string
#include <stdio.h>
#include <string.h>


int main() {
    char str[100], smallest[100], largest[100];
    int i, j, len, smallest_len, largest_len;
    int word_start, word_end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    smallest_len = len;
    largest_len = 0;

    word_start = word_end = 0;

    for (i = 0; i <= len; i++) {
      
        if (str[i] == ' ' || str[i] == '\0') {
            int word_len = word_end - word_start;

            if (word_len < smallest_len && word_len > 0) {
                smallest_len = word_len;
                for (j = 0; j < word_len; j++) {
                    smallest[j] = str[word_start + j];
                }
                smallest[word_len] = '\0';
            }

            if (word_len > largest_len) {
                largest_len = word_len;
                for (j = 0; j < word_len; j++) {
                    largest[j] = str[word_start + j];
                }
                largest[word_len] = '\0';
            }
            word_start = i + 1;
        }
        word_end++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

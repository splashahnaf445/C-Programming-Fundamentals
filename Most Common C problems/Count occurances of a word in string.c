#include <stdio.h>

int main() {
    char str[200], word[50];
    int i = 0, j = 0, k = 0, count = 0;
    char temp[50];  // Temporary array to store each word.

    // Step 1: Get the input string.
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string input.

    // Step 2: Get the word to search.
    printf("Enter the word to count: ");
    scanf("%s", word);  // Read the word input.

    // Step 3: Traverse through the string and compare each word manually.
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            temp[j] = '\0';  // End the current word.

            // Manually compare temp with word
            int match = 1;  // Assume match
            for (k = 0; temp[k] != '\0' || word[k] != '\0'; k++) {
                if (temp[k] != word[k]) {
                    match = 0;  // Not a match
                    break;
                }
            }

            if (match) {
                count++;  // If the word matches, increment the counter.
            }

            j = 0;  // Reset index to store the next word.
        } else {
            temp[j++] = str[i];  // Collect characters for the current word.
        }
        i++;
    }

    // To account for the last word in the string
    temp[j] = '\0';
    int match = 1;  // Assume match for the last word
    for (k = 0; temp[k] != '\0' || word[k] != '\0'; k++) {
        if (temp[k] != word[k]) {
            match = 0;  // Not a match
            break;
        }
    }
    if (match) {
        count++;
    }

    // Step 4: Output the count.
    printf("The word '%s' occurs %d times in the string.\n", word, count);

    return 0;
}

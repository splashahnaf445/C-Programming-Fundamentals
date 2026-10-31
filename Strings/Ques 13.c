#include<stdio.h>
#include<string.h>

// Function to remove all repeated characters from the string
void removeduplicates(char str[]) {
    int i, j, k;
    int len = strlen(str);

    for (i = 0; i < len; i++) {         // Traverse through the string
        for (j = i + 1; j < len; ) {        // Compare the current character with the rest
            if (str[i] == str[j]) {         // If a duplicate is found
                                            // Shift characters to the left to overwrite the duplicate
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--;                          // Reduce the length of the string by 1
            } else {
                j++;                            // Only increment j when no duplicate is found
            }
        }
    }
}

int main() {
    char str[100];

    printf("Give the string: ");
    gets(str);

    removeduplicates(str);

    printf("Result: %s\n", str);    // Use printf to print the modified string

    return 0;
}


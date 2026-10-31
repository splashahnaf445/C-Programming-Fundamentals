/*Write a C program that takes two strings as input and uses pointers to concatenate them. Print the
concatenated string.
*/

#include <stdio.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    // Copy the first string to the result
    while (*str1 != '\0') {
        *result = *str1;
        result++;
        str1++;
    }

    // Copy the second string to the result
    while (*str2 != '\0') {
        *result = *str2;
        result++;
        str2++;
    }

    // Add null terminator to the concatenated string
    *result = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    // Taking two strings as input
    printf("Enter the first string: ");
    gets(str1);  // You can use fgets for safer input
    printf("Enter the second string: ");
    gets(str2);  // You can use fgets for safer input

    // Concatenate the strings
    concatenateStrings(str1, str2, result);

    // Print the concatenated string
    printf("Concatenated String: %s\n", result);

    return 0;
}


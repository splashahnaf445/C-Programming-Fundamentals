/*
Write a C program that does the following:
 Declare an integer array arr with array size 100.
 Declare a pointer variable arrPtr and assign the array arr to it.
 Scan the elements of the array arr using the pointer arrPtr with offset.
 Find and print the largest element of arr using the pointer arrPtr.

*/

#include <stdio.h>

int main() {
    int arr[100];          // Declare an integer array of size 100
    int *arrPtr = arr;     // Declare a pointer and assign it to the array
    int largest;           // Variable to store the largest element

    // Scan the elements of the array using the pointer with offset
    printf("Enter 100 elements:\n");
    for (int i = 0; i < 100; i++) {
        scanf("%d", arrPtr + i);  // Use pointer arithmetic to scan elements
    }

    // Initialize the largest element as the first element in the array
    largest = *arrPtr;

    // Find the largest element using the pointer with offset
    for (int i = 1; i < 100; i++) {
        if (*(arrPtr + i) > largest) {
            largest = *(arrPtr + i);
        }
    }

    // Print the largest element
    printf("The largest element is: %d\n", largest);

    return 0;
}

#include<stdio.h>

/*Write a C program that does the following:
• Declare an integer variable num and initialize it with any value.
• Declare a pointer variable and assign the address of num to it.
• Use the pointer to double the value of num.
• Print the value of num both before and after the modification.
*/

int main(){

int num=5;

int *ptr;

ptr=&num;

printf("Before num=%d",*ptr);
*ptr=*ptr*2;

printf("\nAfter num=%d",*ptr);



return 0;
}

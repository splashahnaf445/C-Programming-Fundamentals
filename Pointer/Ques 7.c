/*Q.7
Write a C program that dynamically allocates memory for an array of 10 integers using pointers.
Take input for the array elements from the user, calculate the average of the elements, and print it.
Finally, free the allocated memory.
*/

#include<stdio.h>

int main(){

float *ptr;
ptr = (int *)malloc(10 * sizeof(int)); // Allocate memory for 10 integers
printf("Give 10 integars: ");
for(int i=0;i<10;i++){
    scanf("%f",ptr+i);
}

float sum=0,avg=0;

for(int j=0;j<10;j++){
    sum+=*(ptr+j);
}

avg=sum/10;

printf("\n%.2f",avg);

return 0;
}

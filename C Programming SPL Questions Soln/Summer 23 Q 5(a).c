#include <stdio.h>
/*
Write a C program that reads the numbers from the "Sample.txt" file given below, stores those
values in an array, calculates the sum of just those values that are even and divisible by 4,
and then outputs the result to the "Output.txt" file. A Sample.txt and Output.txt files are given
below as an example.

Sample.txt
16 -3 -4 7 12 2 .....more values
Output.txt
Sum: 24 */


int main() {

FILE *input,*output;

input=fopen("Sample.txt","r");

if(input==NULL){
    printf("Error opening file");
}
//int arr[50];
int num;
int sum=0;
while(fscanf(input, "%d",& num)!=EOF){
    if(num%4==0){
        sum+=num;
    }
}

fclose(input);

output=fopen("Output.txt","w");
fprintf(output, "Sum = %d",sum);

fclose(output);
}

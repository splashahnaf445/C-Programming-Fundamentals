#include<stdio.h>
/*
Write a C program that reads integers from a file called 'input.txt', calculates the sum of these
integers, and writes the sum to a file called 'output.txt'. If the file 'input.txt' does not exist, print an
appropriate error message
*/
int main(){
FILE *file,*output;

file=fopen("input.txt","r");

if(file==NULL){
    printf("\nError opening file");
}
int num;
int sum=0;
while(fscanf(file, "%d",&num)!=EOF){
    sum+=num;
}

fclose(file);

output=fopen("output.txt","w");

fprintf(output, "%d",sum);
fclose(output);

return 0;
}

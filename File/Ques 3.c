/*
Q.3
Write a C program that reads a list of student names and their grades from a file 'students.txt' where
each line contains a name followed by a grade. The program should print the name and grade of the
student with the highest grade.
*/
#include<stdio.h>

int main(){

FILE *in,*out;

in=fopen("students.txt","r");

int g=0;

while(fscanf(in,"%d",&g)!=EOF){
    printf("%d",g);
}
fclose(in);
return 0;
}

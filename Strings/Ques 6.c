#include<stdio.h>

//6. Write a program in C to find the length of a string without using any library function.

int length(char str[]){

int i,c;

while(str[i]!='\0' && str[i]!='\n'){
    c++;
    i++;
}
return c;

}

int main(){

char str[100];


printf("give the string  :");
gets(str);

int l=length(str);

printf("\nLength of the string:  %d",l);



return 0;
}

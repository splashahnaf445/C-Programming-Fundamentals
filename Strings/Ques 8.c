#include<stdio.h>

//8. Write a program in C to print individual characters of a string in reverse order.

int reversechar(char str[]){
    int i=0;

    while(str[i]!='\0'){
        str[i++];
    }
    while(i>=0){

        printf("%c",str[i]);
        i--;
    }

}

int main(){

char str[100];
printf("Give a string  :");
gets(str);

reversechar(str);



return 0;
}

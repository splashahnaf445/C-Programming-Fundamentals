#include<stdio.h>

//12.Write a program in C to count the number of words in a string

int countword(char str[]){

    int i=0,w=1;
    while(str[i]!='\0'){
        if(str[i]==' '){
            w++;
        }
        i++;
    }

    return w;
}

int main(){

char str[100];

printf("Give a string ");
gets(str);

int word=countword(str);

printf("\n%d",word);


}

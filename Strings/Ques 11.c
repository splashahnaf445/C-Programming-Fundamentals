#include<stdio.h>
//Write a program in C to count how many vowels are there in a string

int vowels(char str[]){

    int i=0,v=0;

    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            v++;
        }
        i++;
    }
return v;

}

int main(){

char str[100];

printf("Give the string ");
gets(str);

int vowel=vowels(str);

printf("\n%d",vowel);

return 0;
}

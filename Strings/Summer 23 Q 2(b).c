#include<stdio.h>

/* Q.2(b) Write a C program that takes two strings from keyboard. The first string is a sentence and the

second string is a single word. The program will find (case insensitively) the number of

occurrences of the second string in the first string.

*/

int main(){

char str[100],word[10];

printf("Give a string: ");
gets(str);

printf("\nGive the word to search: ");
gets(word);
int a=0;
while(str[a]!='\0'){
    if(str[a]<91 && str[a]!=' '){
        str[a]+=32;
    }
    a++;
}
int x=0;
while(word[x]!='\0'){
    if(word[x]<91 && word[x]!='\0'){
        word[x]+=32;
    }
    x++;
}


int i=0,j=0,k=0,count=0;

while(str[i]!='\0'){
    if(str[i]==word[j]){
        k=i;

    }
    while(str[k]==word[j] && word[j]!='\0'){

        k++;
        j++;
    }

    if(word[j]=='\0'){
            count++;
            j=0;
        }

    i++;
}

printf("\nFound %d times !",count);

if(!count){
    printf("\nNot found");
}


return 0;
}

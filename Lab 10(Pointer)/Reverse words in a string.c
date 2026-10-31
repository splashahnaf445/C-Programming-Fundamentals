#include<stdio.h>

//reverse characters in words in a string

void main(void){

char str[100];

printf("Give the string : ");
gets(str);
puts(str);

int j=0,word=0;

int i=strlen(str)-1;


while(str[i]!='\0'){
    str[i++];
}

while(i>=0){
    if(str[i]==' '){
        printf(" ");
    }else if(str[i]!='\0'){
        printf("%c",str[i]);
    }
    str[i--];
}

}

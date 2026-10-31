#include<stdio.h>
//reverse characters in  a string
void main(){

    char *p;
    char str[50];

    p=str;

    printf("Give the string: ");
    scanf("%s",p);
    printf("%s",p);

    while(*p!='\0'){
        p++;
    }
    printf("\n");
    printf("\nReverse string: ");
    while(p!=(str-1)){
        printf("%c",*p);
        p--;
    }


}

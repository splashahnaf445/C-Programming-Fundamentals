#include<stdio.h>
//count the numbers of character in string without strlen,string.h and using pointer

void main(void){
    int i=0,j=0;
    char *p;
    char str[100];
    p=str;

    printf("Give the string : ");
    scanf("%s",p);
    printf("\n%s",p);

    int count=0;
    while(p[i]!='\0'){
        count++;
        p[i++];
    }



    printf("\n%d",count);



}

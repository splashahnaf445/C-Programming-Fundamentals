#include<stdio.h>

void main(){

int i=0,j=0,k=0;
char str[100],words[10][10];

printf("Give the string : ");
gets(str);

printf("\nThe string is: %s",str);

while(str[i]!='\0' && str[i]!='\n'){
    if(str[i]==' '){
        words[j][k]='\0';
        j++;
        k=0;

    }else{
        words[j][k++]=str[i];

    }
        i++;

}
    words[j][k]='\0';
    int n=j;

    printf("\nReversed string is: ");
    for(i=n;i>=0;i--){
        printf("%s ",words[i]);
    }

}

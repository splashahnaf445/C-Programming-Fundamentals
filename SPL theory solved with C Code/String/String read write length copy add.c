#include<stdio.h>

void main(){

    //define string
    char str1[50],str2[50],str3[60];
    int i,n;
    printf("Enter a string :");

    //read string : gets(string name)
    gets(str1);
    printf("\nEnter another string :");
    gets(str2);
    //output/show string : puts(string name); or

    printf("Given string is :%s",str1);

    //showing string lenght : strlen

    n=strlen(str1);
    printf("\nthe length is :%d",n);

    //add one string to another's tail : strcat

    strcat(str1,str2);
    printf("\n\n%s ",str1);

    //copy one string to another : strcpy

    strcpy(str1, str2);
    printf("\nCopied from string 2: %s",str1);

}

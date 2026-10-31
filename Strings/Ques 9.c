#include<stdio.h>

//9. Write a program in C to concatenate two strings without using any library function


int main(){

char str1[100],str2[100],str3[100];


printf("give the 1st string  :");
gets(str1);

printf("give the 2nd string  :");
gets(str2);

int i=0;

while(str1[i]!='\0'){
    str3[i]=str1[i];
    i++;
}
int j=0;
int k=i;
str3[k]=' ';
k++;
while(str2[j]!='\0'){
    str3[k]=str2[j];
    j++;
    k++;
}
str3[k] = '\0';
puts(str3);

return 0;
}

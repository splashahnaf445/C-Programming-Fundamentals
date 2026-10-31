#include<stdio.h>

//count the number of words in string without string.h>

char str[100];

void main(void){
printf("Give the string : ");
gets(str);
puts(str);

int i=0,count=1;
while(str[i]!='\0'){
    if(str[i]==' '){
        count++;

    }
    str[i++];
}
printf("\n%d words",count);

}

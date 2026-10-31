#include<stdio.h>
#include<string.h>

int main(){
/*
int a[5]={10,20,30,40,50};

int *p=a;

printf("%d",*p);
printf("\n%d",*(p+1));
printf("\n%d",*(p+4));
*/
//array & sring doesn't need &

char *p;
char str[100];
p=str;
scanf("%s",p);

printf("%s",p);
int length=0;

while(*p!='\0'){
    length+=1;
    p++;
}
printf("\nLenght =%d",length);

return 0;
}

#include<stdio.h>
int main(){
char str[100];
char *p;
p=str;

scanf("%s",p);
while(*p!='\0'){
    p++;
}

while(p!=(str-1)){
    printf("%c",*p);
    p--;
}


return 0;
}

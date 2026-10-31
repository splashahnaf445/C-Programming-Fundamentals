#include<stdio.h>


int main(){


char str[100];

printf("Give the string  ");
gets(str);

    int i=0;
    int a=0,d=0,s=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
            a++;
        }else if(str[i]>='0' && str[i]<='9'){
            d++;
        }else{
            s++;
        }
        i++;
    }
s++;    //<counting the null character too>

printf("\nNumber of alphabets : %d",a);
printf("\nNumber of digits : %d",d);
printf("\nNumber of special characters : %d",s);

return 0;
}

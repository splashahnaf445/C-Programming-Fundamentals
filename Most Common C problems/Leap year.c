#include<stdio.h>

void main(){

int a;

scanf("%d",&a);

if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        printf("%d is a leap a.\n", a);
    } else {
        printf("%d is not a leap a.\n", a);
    }


}

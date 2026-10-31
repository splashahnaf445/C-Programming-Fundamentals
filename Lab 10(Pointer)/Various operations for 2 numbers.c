#include<stdio.h>
void main(){

//sum of two numbers

    int *p,*q;
    int a,b;
    p=&a;
    q=&b;
/*

    printf("give two values: ");
    scanf("%d%d",&a,&b);

    printf("\n%d",*p+*q);

*/

//maximum from two numbers

/*
    printf("give two values: ");
    scanf("%d%d",p,q);
    if(*p>*q){
            printf("\n%d",*p);
    }else{
            printf("\n%d",*q);
    }

*/

//swap values

    printf("give two values: ");
    scanf("%d%d",p,q);

    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("Swapped values: %d  %d",*p,*q);




}

#include<stdio.h>
int main(){

int *a,*b;

int num1,num2;


a=&num1;
b=&num2;

scanf("%d",a);
scanf("%d",b);

if(*a>*b){
    printf("%d",*a);
}else{
    printf("%d",*b);

}




return 0;
}

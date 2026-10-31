
#include<stdio.h>
int main(){

int a,b,c,choice;

printf("enter two numbers:  ");
scanf("%d%d",&a,&b);

printf("enter choice 1-4 (1 for addition,2 for subtraction,3 for multiply, 4 for divide:  ");
scanf("%d",&choice);


switch(choice){

    case 1:c=a+b;printf("Addition=%d",c);break;
    case 2:c=a-b;printf("Subtraction=%d",c);break;
    case 3:c=a*b;printf("Multiplication=%d",c);break;
    case 4:c=a/b;printf("Division=%d",c);break;
}

return 0;
}

#include<stdio.h>

int c;
float a,b,sum,sub,mul,div,rec,sq,circ;
void main(){
        printf("Give your choice : \n1.Addition\n2.Subtract\n3.Multiply\n4.Divide\n5.area of rectangle\n6.area of square\n7.area of circle");
        scanf("%d",&c);
        printf("\nGive two numbers :");
        scanf("%f%f",&a,&b);
        switch(c){
            case 1:addition();break;
            case 2:subtract();break;
            case 3:multiply();break;
            case 4:divide();break;
            case 5:rectangle();break;
            case 6:square();break;
            case 7:circle();break;
        }


}
void addition(){
        sum=a+b;
        printf("\nSum : %.2f",sum);


}
void subtract(){
        sub=a-b;
        printf("\nSubtraction : %.2f",sub);


}
void multiply(){
        mul=a*b;
        printf("\nMultiplication : %.2f",mul);


}
void divide(){
        div=a/b;
        printf("\nDivition : %.2f",div);


}
void rectangle(){
        rec=a*b;
        printf("\nArea of rectangle : %.2f",rec);


}
void square(){
        sq=a*a;
        printf("\nArea of square : %.2f",sq);


}
void circle(){
        circ=3.1416*a*a;
        printf("\nArea of circle : %.2f",circ);


}








#include<stdio.h>
#include<math.h>

void main(){



float a,b,c,d,e,f;

printf("Give the value of a,b,c:     ");
scanf("%f%f%f",&a,&b,&c);

d=sqrt(b*b-4*a*c);

if(d<0){
    printf("Equation has no real solution :complex number");

}else if(d==0){
    e=-b/(2*a);
    printf("Equation has one solution:  %.2f",e);

}else if(d>0){
    e=(-b+d)/(2*a);
    f=(-b-d)/(2*a);
    printf("Equation has two solutions:     %.2f",e);
    printf("\n                              %.2f",f);

}

}

#include<stdio.h>

int factorial(int n){
if(n==1){
    return 1;
}else{
    return n*factorial(n-1);
}
}

int sum(int a, int b){

    return a+b;
}

int main(){

    int a,b,c;
    printf("Give three integers ");

    scanf("%d%d%d",&a,&b,&c);

    a=factorial(a);
    b=factorial(b);
    c=factorial(c);

    int sum1,sum2;

    sum1=sum(a,b);
    sum2=(c,sum1);

    printf("%d",sum2);

return 0;

}

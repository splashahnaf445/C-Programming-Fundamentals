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

printf("Give three numbers : ");
scanf("%d%d%d",&a,&b,&c);
a=factorial(a);
b=factorial(b);
c=factorial(c);

printf("%d  %d  %d",a,b,c);
int add=sum(a,b);

printf("\n%d",add);
c=sum(add,c);

printf("\n\n%d",c);
return 0;
}

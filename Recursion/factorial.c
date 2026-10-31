#include<stdio.h>

int factorial(int n){

    if(n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){

int n;
printf("give the number");
scanf("%d",&n);

int res;
res=factorial(n);
printf("%d",res);

return 0;
}


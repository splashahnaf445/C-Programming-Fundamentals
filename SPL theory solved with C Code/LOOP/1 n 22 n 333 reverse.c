#include<stdio.h>

void main(){

    int n,i,j;
    printf("give a value ");
    scanf("%d",&n);


        for(i=1;i<=n;i++){
            for(j=n-1;j>=i;j--){

                printf(" ");
            }

            for(j=1;j<=i;j++){
                printf("%d",i);
            }
                printf("\n");
        }



}

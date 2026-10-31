#include<stdio.h>
void main(){

    int n,m;
    printf("numbers in array A : ");
    scanf("%d",&n);

    int arrA[n];


    printf("give values of array A: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arrA[i]);
    }

    printf("numbers in array B : ");
    scanf("%d",&m);

    int arrB[m];

    printf("give values of array B: ");
    for(int j=0;j<m;j++){
        scanf("%d",&arrB[j]);
    }

    printf("Array A :");
    for(int j=0;j<m;j++){
        printf("%d ",arrB[j]);
    }

    printf("\n");
    printf("Array B :");
    for(int i=0;i<n;i++){
        printf("%d ",arrA[i]);
    }

}

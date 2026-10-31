#include<stdio.h>

void main(){
    int n;
    printf("how many numbers ");
    scanf("%d",&n);
    int arr[n];

    printf("Give the values ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

//normal print

    printf("Array A:");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");

// reverse print

    printf("Array B:");
    for(int i=n-1;i>=0;i--){
    printf("%d ",arr[i]);
    }


}

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

    for(int i=0;i<n;i++){

        for(int j=1;j<n;j++){
        if(arr[i]==arr[j]){
                arr[j]==arr[j+1];

            }
        }

    }

    printf("without duplicates: ");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }



}

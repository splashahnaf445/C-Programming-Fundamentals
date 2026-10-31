#include<stdio.h>
void main(){

    int n;
    printf("HOw many numbers ");
    scanf("%d",&n);
    int arr[n];

    printf("give %d nos of values ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int temp;

    // 5, 9 ,4 , 6, 1, 2

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nThe ascending order is :");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }





}

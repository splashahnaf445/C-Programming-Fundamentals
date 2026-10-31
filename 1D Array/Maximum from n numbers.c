#include<stdio.h>

void main(){

int n,max=0;

printf("how many numbers ");
scanf("%d",& n);
int arr[n];

printf("give the values ");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int j=0;j<n;j++){
    if(arr[j]>max){
        max=arr[j];
        printf("index=    %d",j);
    }
}
    printf("\nmax=    %d",max);

}

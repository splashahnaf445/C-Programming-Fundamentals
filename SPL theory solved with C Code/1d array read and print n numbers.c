#include<stdio.h>

void main(){

int n;


printf("How many numbers ? ");
scanf("%d",&n);
int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }

}

#include<stdio.h>

void main(){

int n,sum=0;


float avg;
printf("How many numbers to find sum and average ? ");
scanf("%d",&n);
int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        sum=sum+arr[j];

    }
    avg=sum/n;

        printf("sum= %d",sum);
        printf("\naverage= %.2f",avg);
}

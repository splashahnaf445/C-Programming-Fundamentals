#include<stdio.h>

void main(){

int n,i=1,j=1,sum=0;

printf("The series is : 1,5,9,13,........");

printf("\n\nTill what term you want to sum up the series?");

scanf("%d",&n);

while(j<=n){

    sum=sum+i;
    i=i+4;
    j=j+1;


}
printf("Sum of the series:      %d",sum);


}

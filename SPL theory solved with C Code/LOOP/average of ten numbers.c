#include<stdio.h>

void main(){

int n,sum=0,i=1;

float avg;
printf("Give ten numbers   ");
while(i<=10){

scanf("%d",&n);

sum=sum+n;

i=i+1;

}
avg=sum/10;

printf("average= %.2f",avg);

}

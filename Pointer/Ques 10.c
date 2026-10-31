#include<stdio.h>
/*
Write a C program that defines a function to find the sum of elements in an array using a pointer.
Take an array of integers as input from the user. Calculate the sum of elements in the subarray
starting from index 2 to index 5 using the function. Print the sum
*/

int sumarr(int *ptr){

int sum=0;
for(int i=2;i<6;i++){
    sum+=*(ptr+i);
}

return sum;
}

int main(){

int arr[7];
printf("Give array elements: ");
for(int j=0;j<7;j++){
    scanf("%d",&arr[j]);
}
/*
int subarr[4];
int i=2;
while(i<=5){
for(int k=0;k<4;k++){
    subarr[k]=arr[i];
}
i++;
}*/
int add=sumarr(arr);

printf("\n%d",add);
return 0;
}

/*
Write a C program that declares a 2D array of integers and uses a pointer to find the maximum
value in the array. Print the maximum value and its position (row and column) in the array.
*/

#include<stdio.h>

int main(){

int arr[3][3]={8,4,7,6,8,1,2,4,5};

int *ptr=arr;

int max=*ptr;

for(int i=1;i<9;i++){
    for(int j=0;j<9;j++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }
}

printf("\nmax= %d",max);


return 0;
}

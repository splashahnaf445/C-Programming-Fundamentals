/*
Write a C program that declares an array of integers. Use a pointer to find and print all the prime
numbers in the array.

A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

Algorithm:

    Iterate through each element: Check each element in the array.
    Check for primality: For each element, determine if it's prime.
        Start with a divisor of 2.
        If the element is divisible by the divisor, it's not prime.
        Continue checking divisors up to the square root of the element. If no divisors are found, it's prime.
*/

#include<stdio.h>
#include<math.h>
int isprime(int num){
if(num<=1){
    return 0;
}
for(int i=2;i<=sqrt(num);i++){
    if((num%i)==0){
        return 0;
    }
}
return 1;

}

int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,10};

int *ptr=arr;

for(int j=0;j<10;j++){
    if(isprime(*(ptr+j))){
        printf("%d ",*(ptr+j));
    }
}



return 0;
}


/*
Write a C program that defines a function to reverse an array using pointers. Take an array of 5
integers from the user, reverse it using the function, and print the reversed array.
*/

#include<stdio.h>
int reverse(int *ptr){

for(int i=4;i>=0;i--){
        printf("%d",*(ptr+i));
}


}

int main(){

int arr[5];
printf("Give 5 integars: ");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}

reverse(arr);


return 0;
}

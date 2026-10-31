#include<stdio.h>

int swap(int *a,int *b){
int temp=0;
temp=*a;
*a=*b;
*b=temp;

}

/*Q.1
Write a C program that declares an integer variable 'num' and initializes it with 5. Declare a pointer
variable and assign the address of 'num' to it. Use the pointer to increment the value of 'num' by 10.
Print the value of 'num' using both the pointer and the variable itself.
*/

int main(){

int num=5;
int *ptr=&num;

*ptr=*ptr+10;

printf("%d\n",*ptr);
printf("%d",num);

/*Q.2
Write a C program that reads 5 integers from the user and stores them in an array. Use a pointer to
calculate the sum of all the elements in the array. Print the sum
*/

int arr[5];
printf("give 5 elements: ");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}

int *ptrarr=arr;
int sum=0;

for(int k=0;k<5;k++){

    sum+=*(ptrarr+k);
}

printf("\nSum=%d",sum);

/*Q.3
Write a C program that defines a function 'swap' to swap the values of two integer variables using
pointers. Call this function in the main function to swap two integers entered by the user.
*/
int x,y;

printf("\nGive two integars: \n");
scanf("%d%d",&x,&y);

swap(&x,&y);
printf("%d %d",x,y);

return 0;
}

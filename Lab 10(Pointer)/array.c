#include<stdio.h>
void main(){


    int *p;
    int n;
    int arr[50];

    p=&arr;

    printf("How many numbers ");
    scanf("%d",&n);
    printf("Give some numbers ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

//printing array wihtout using index

/*    for(int j=0;j<n;j++){
            printf("%d ",*(p+j));

    }
*/

//sum of elements in array

/*
int sum=0;

    for(int i=0;i<n;i++){
    sum=sum+*(p+i);
    }

    printf("sum= %d",sum);
*/

//reverse array print

    for(int j=n-1;j>=0;j--){
        printf("%d ",*(p+j));
    }


}

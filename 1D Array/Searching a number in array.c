#include<stdio.h>
void main(){

    int n,s;

    printf("how many numbers ");
    scanf("%d",& n);
    int arr[n];

    printf("give the values ");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Number to search : ");
    scanf("%d",&s);

    int found=0;

    for(int j=0;j<n;j++){
        if(arr[j]==s){
            found=1;
            printf("Found at index position :%d ",j);
        }
    }
        if(!found){
            printf("\nNot found");
        }



}

#include<stdio.h>
void main(){

    int n,sum=0;
    printf("How many integers ");
    scanf("%d",&n);

    int arr[n];
    printf("Give the values : ");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

/*sum of even integers:

    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            sum=sum+arr[j];
        }
    }
*/
    //sum of even indexed integers :

    for(int j=0;j<n;j++){
        if(j%2==0){
            sum=sum+arr[j];
        }
    }


    printf("sum = %d",sum);

}

#include<stdio.h>
int isEven(int n){

if(n%2==0){
    return 1;
}else{
    return 0;
}

}

int computeEvensum(int arr[],int n){

int sum=0;
for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
}
for(int j=0;j<n;j++){
    if(isEven(arr[j])){
        sum+=arr[j];
    }
}

return sum;
}


int main(){

int n;
printf("How many numbers ");
scanf("%d",&n);
int arr[n];
printf("Give the array ");

int res=computeEvensum(arr,n);

printf("%d",res);



}

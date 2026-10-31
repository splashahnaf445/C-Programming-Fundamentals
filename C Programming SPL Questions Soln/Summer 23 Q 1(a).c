#include<stdio.h>
// (a)


int Iseven(int n){
if(n%2==0){
    return 1;
}else{
    return 0;
}

}

int ComputeEvenSum(int arr[],int n){

int sum=0;
for(int i=0;i<n;i++){
if(Iseven(arr[i])){
    sum=sum+arr[i];
}

}

return sum;


}
int main(){

int arr[100];
int n;

printf("How many numbers  ");
scanf("%d",&n);

printf("\ngive the numbers  ");

for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
}

int res=ComputeEvenSum(arr,n);
printf("%d",res);
return 0;
}


// (b)
/*
1 3 5 2
8 3 4 2
16 3 4 12
32 29 4 12

*/

#include<stdio.h>
int large(int arr[],int n){
if(n==1){
  return arr[0];
}
else {
    int max=largest(arr,n-1);

}
if(arr[n-1]>max){
        return arr[n-1];
}else{
        return max;
}
}

int main(){

int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",arr[i]);
}
printf("Largest: %d",largest(a,n));
}

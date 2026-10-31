#include<stdio.h>

int updateBalance(float arr[],int i, int j, float a){
    if(j==1){
        arr[i]=arr[i]-a;
        }
    else if(j==2){
        arr[i]=arr[i]+a;
    }

    if(arr[i]>0){
        return arr[i];
    }else{
        printf("Insufficient balance");
    }

}

int main(){

float cust[5];
printf("Customer balance: ");
for(int i=0;i<5;i++){
    scanf("%f",&cust[i]);
}
int i,j;
float a;
printf("\nEnter customer's ID: ");
scanf("%d",&i);

printf("\nWhat do you want to do? \n1.Withdrawal\n2.Deposit");
scanf("%d",&j);

printf("\nTransaction amount: BDT");
scanf("%f",&a);

float res;
res=updateBalance(cust,i,j,a);
printf("Remaining balance:  %.2f",res);



return 0;
}

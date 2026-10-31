#include<stdio.h>

int input_CT_marks(float ct_mark[],int n){


for(int i=0;i<n;i++){

    printf("\nGive %d th Ct mark ",i+1);
    scanf("%f",&ct_mark[i]);

}


}

float take_Highest_CT(float ct_mark[],int n){

float highest=ct_mark[0];

for(int i=1;i<n;i++){
    if(ct_mark[i]>highest){
        highest=ct_mark[i];
    }
}

return highest;

}

int main(){

float arr[10];
int n;
printf("How many CTs ");
scanf("%d",&n);

input_CT_marks(arr,n);

float max=take_Highest_CT(arr,n);

printf("\n%.2f",max);


return 0;
}

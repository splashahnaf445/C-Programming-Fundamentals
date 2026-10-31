#include<stdio.h>

int input_CT_marks(float ct_marks[],int n){

    for(int i=0;i<n;i++){

        scanf("%f",&ct_marks[i]);

    }

}
int take_Highest_CT(float ct_marks[],int n){

    float max=ct_marks[0];

    for(int i=1;i<n;i++){
        if(ct_marks[i]>max){
            max=ct_marks[i];
        }
    }

    return max;
}
int main(){

    float ct_marks[10];
    int n;
     printf("How many class tests ");
    scanf("%d",&n);
    input_CT_marks(ct_marks,n);
    float result=take_Highest_CT(ct_marks,n);

    printf("%.2f",result);

}

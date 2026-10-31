#include<stdio.h>
void input_array();
void display_array();
void average_array();


int n;
float arr[50],sum,avg;
void main(){

    input_array();
    display_array();
    average_array();



}

void input_array(){

    printf("how many values ");
    scanf("%d",&n);
    printf("give the %d values : ",n);
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }


}
void display_array(){

        printf("the values are: ");
        for(int i=0;i<n;i++){
        printf("%.2f ",arr[i]);
    }

}

void average_array(){

        for(int j=0;j<n;j++){
        sum=sum+arr[j];

    }
    avg=sum/n;

        printf("sum= %.2f",sum);
        printf("\naverage= %.2f",avg);



}

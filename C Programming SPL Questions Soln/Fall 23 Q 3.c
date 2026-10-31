#include<stdio.h>

/*
Q.3 Suppose you're developing a program for the United International University (UIU) Bookshop to
manage customer purchases. Your task is to create a C program that can store, manage and
manipulate the bookshop's last 12 months’ customer data. As it is the end of the year, the
bookshop is giving a “best customer award” to the customers who purchased the most in the past
year. Write a C program that will:
1. Store the following information of a customer in a structure.
(i) Name (ii) ID (iii) Number of times shopped, and (iv) An array of spent money in each of the
shoppings. Use appropriate data types and variable names for all the features.
2. Take input for 100 customers from the user.
3. Calculate the average purchase for each customer (total money spent divided by the total
number of shopping).
4. To find the best customer, only consider the customers who have shopped more than 10
times. Among these selected customers, the customer having the best average purchase
(calculated from (3)) will win the award. Print the customer's name who has won the award
*/
struct customer{

    char name[50];
    char id[20];
    int shopped;
    float spentmoney[50];

};

float totalspent(float arr[],int shopped){
float sum=0;
for(int k=0;k<shopped;k++){
    sum+=arr[k];
}

return sum;
}


int main(){

struct customer cust[100];
int bestcustindex=-1;
float maxavgpurchase=0.00;



for(int i=0;i<100;i++){
    printf("\nEnter %d th customer info: \n",i+1);
    printf("Name: ");
    getchar();
    gets(cust[i].name);
    printf("\nID: ");
    getchar();
    gets(cust[i].id);
    printf("\nNumber of times shopped: ");
    scanf("%d",&cust[i].shopped);
    for(int j=0;j<cust[i].shopped;j++){
        printf("\nSpent money in %d th shopping: ",j+1);
        scanf("%f",&cust[i].spentmoney[j]);
    }

    float avgpurchase=totalspent(cust[i].spentmoney,cust[i].shopped)/cust[i].shopped;
    printf("The average purchase for %d th customer: %.2f",i+1,avgpurchase);
    if(cust[i].shopped>10){
        if(avgpurchase>maxavgpurchase){
            maxavgpurchase=avgpurchase;
            bestcustindex=i;
        }
    }

}

if(bestcustindex!=-1){
    printf("\nBest customer award goes to: %s", cust[bestcustindex].name);
        printf(" with an average purchase of %.2f\n", maxavgpurchase);
    } else {
        printf("\nNo customer has shopped more than 10 times.\n");
    }




return 0;
}

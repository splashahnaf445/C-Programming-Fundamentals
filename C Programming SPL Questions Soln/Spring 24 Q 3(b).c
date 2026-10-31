#include<stdio.h>

struct Patient{

char name[50];
int age;
float height;
float weight;
float BMI;

};
int main(){

struct Patient pst[100];
for(int i=0;i<100;i++){

printf("\nEnter %d th patient name: ",i+1);
getchar();
gets(pst[i].name);
printf("\nEnter age: ");
scanf("%d",&pst[i].age);
printf("\nEnter height: ");
scanf("%f",&pst[i].height);
printf("\nEnter weight: ");
scanf("%f",&pst[i].weight);

pst[i].BMI=pst[i].weight/pst[i].height;

printf("\nThe BMI of %d th partient: %.2f",i+1,pst[i].BMI);
}
return 0;
}

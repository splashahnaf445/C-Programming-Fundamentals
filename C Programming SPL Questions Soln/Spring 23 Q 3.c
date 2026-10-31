#include<stdio.h>

/*
Write a C program for a large grocery company to find the employees who are eligible for yearly
increment. Do the following operations:
i) Create a structure named Employee with id(int), name(string), salary(float) and last 12
months’ performance scores(int scores[12]) as members.
ii) Declare an array of size N of type Employee structures.
iii) Take the inputs from the keyboard.
iv) Calculate all employees’ average performance scores. For example, if you want to find the
average of an employee, you have to add all the 12 scores of one employee and then divide
the result by 12. You have to do it for all the employees. If the average is more than 80, a
line will be printed, “Employee with id=(print employee’s id here) is eligible for increment.”
otherwise, print “Employee with id=(print employee’s id here) is not eligible for increment.”

*/

struct Employee{
int id;
char name[50];
float salary;
int scores[12];
};

int sumprfm(int score[12]){
int sum=0;

for(int k=0;k<12;k++){
    sum+=score[k];
}
return sum;
}


int main(){
int N;
printf("How many employees ");

scanf("%d",&N);
struct Employee empl[N];

for(int i=0;i<N;i++){
    printf("\nEnter %d th employee info",i+1);
    printf("\nID: ");
    scanf("%d",&empl[i].id);
    printf("\nName");
    getchar();
    gets(empl[i].name);
    printf("\nSalary : ");
    scanf("%f",&empl[i].salary);
    for(int j=0;j<12;j++){
    printf("\nEnter %d th month score:",j+1);
    scanf("%d",&empl[i].scores[j]);
    }

    int add=sumprfm(empl[i].scores);
    float avg=add/12;

    if (avg > 80) {
            printf("Employee with ID=%d is eligible for increment.\n", empl[i].id);
        } else {
            printf("Employee with ID=%d is not eligible for increment.\n", empl[i].id);
        }
}



return 0;
}

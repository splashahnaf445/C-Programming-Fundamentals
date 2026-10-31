/*
Suppose you're developing a program for the United International University (UIU) Gym
to manage student membership and workout sessions. Your task is to create a C program
that can store, manage, and manipulate workout data of students over the last semester.
As it is the end of the semester, the gym is giving a “most dedicated member award” to
the students who attended the gym the most. Write a C program that will:
i. Store the following information of a student in a structure: (i) Name (ii) Student
ID (iii) Number of workout sessions attended, and (iv) An array of durations (in minutes)
for each workout session. Use appropriate data types and variable names for all the
features.
ii. Take input for 60 students from the user.
iii. Calculate the total workout duration for each student.
iv. To find the most dedicated member, only consider students who have attended
more than 20 workout sessions. Among these selected members, the student with the
highest total workout duration will win the award. Print the student's name who has won
the award.
*/

#include<stdio.h>

struct gym{
char name[50];

int id;
int sessions;
int duration[50];

};
int totaldur(int arr[50]){
int sum=0;
for(int i=0;i<50;i++){
    sum+=arr[i];

}
return sum;
}

int main(){

struct gym gym[60];

int highindex=0;
int highestdur=0;

for(int i=0;i<60;i++){
    printf("\nEnter %d th student info: ",i+1);
    printf("\nName: ");
    getchar();
    gets(gym[i].name);
    printf("\nID: ");
    scanf("%d",&gym[i].id);
    printf("\n:Number of workout sessions attended:  ");
    scanf("%d",&gym[i].sessions);
    for(int j=0;j<gym[i].sessions;j++){
        printf("enter %d th workout duration(in minutes): ",j+1);
        scanf("%d",&gym[i].duration[j]);
    }
    if(gym[i].sessions>20){
            int add=totaldur(gym[i].duration);
            if(add>highestdur){
                highestdur=add;
                highindex=i;
            }

    }
}


printf("\nThe most dedicated member award goes to: \n");
printf("%s\n with %d minutes of workout",gym[highindex].name,highestdur);


return 0;
}

/* Write a C program to store the following information about students and perform the
following operations:
i. Create a structure named Student with the following members: name (string),
roll_number (int), marks (float), and grade (char).
ii. Declare an array of size 50 of type Student structures.
iii. Take inputs (name, roll_number, marks) from the keyboard, and calculate the
grade of the student based on the marks using the following criteria:
A for marks >= 90
B for marks >= 80 and < 90
C for marks >= 70 and < 80
D for marks >= 60 and < 70
F for marks < 60
iv. Find and display the details of the student with the highest marks.
v. Count and display the number of students who have received a grade of A.
*/

struct Student{


char name[100];
int roll;
float marks;
char grade;


};

int main(){

struct Student std[50];
int highestind=0;
float highestmark=0.0;
int count=0;

for(int i=0;i<50;i++){
    printf("\nEnter %d th student info: ",i+1);
    printf("\nname: ");
    getchar();
    gets(std[i].name);
    printf("\nroll: ");
    scanf("%d",&std[i].roll);
    printf("\nmarks: ");
    scanf("%f",&std[i].marks);

    if(std[i].marks>=90){
        std[i].grade='A';
    }
    else if(80<=std[i].marks<90){
        std[i].grade='B';
    }
    else if(70<=std[i].marks<80){
        std[i].grade='C';
    }
    else if(60<=std[i].marks<70){
        std[i].grade='D';
    }
    else if(std[i].marks<60){
        std[i].grade='F';
    }

    if(std[i].marks>highestmark){
        highestmark=std[i].marks;
        highestind=i;
    }

    if(std[i].grade=='A'){
        count++;
    }

}

printf("\nDetails of the student with highest mark: ");
printf("\nname: %s",std[highestind].name);
printf("\nroll: %d",std[highestind].roll);
printf("\nmarks: %f",std[highestind].marks);
printf("\ngrade: %c",std[highestind].grade);


printf("\nnumber of students who have received a grade of A:  %d",count);

return 0;
}

#include<stdio.h>

/*
Write a C program to store the following information about books and perform the
following operations:
i. Create a structure named Book with the following members: title (string),
author (string), price (float), and year (int).
ii. Declare an array of size 50 of type Book structures.
iii. Take inputs (title, author, price, year) from the keyboard and store them in the
array.
iv. Find and display the details of the most expensive book.
*/

struct Book{
char title[100];
char author[50];

float price;

int year;

};
int main(){

struct Book book[50];

int mostexpindex=0;
int expensive=0;

for(int i=0;i<50;i++){
    printf("Enter %d th book title: ",i+1);
    getchar();
    gets(book[i].title);
    printf("Enter author name: ");
    getchar();
    gets(book[i].author);
    printf("Enter book price: ");
    scanf("%f",&book[i].price);
    printf("Enter published year: ");
    scanf("%d",&book[i].year);

    if(book[i].price>expensive){
        expensive=book[i].price;
        mostexpindex=i;
    }

}

printf("\nThe details of the most expensive book: \n");
printf("name: %s",book[mostexpindex].title);
printf("\nnauthor: %s",book[mostexpindex].author);
printf("\nprice: %f",book[mostexpindex].price);
printf("\nyear: %d",book[mostexpindex].year);

return 0;
}

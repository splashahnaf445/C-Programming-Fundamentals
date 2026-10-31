#include<stdio.h>

struct Rectangle{
int length;
int breadth;

};
int area(struct Rectangle *rect){

return rect->length * rect->breadth;
}




int main(){

int largestindex=0;
int larea=0;
struct Rectangle r[10];

for(int i=1;i<=3;i++){
printf("\nLength of rectangle %d: ",i);
scanf("%d",&r[i].length);

printf("\nWidth of rectangle %d: ",i);
scanf("%d",&r[i].breadth);
int ar=area(&r[i]);

if(ar>larea){
    larea=ar;
    largestindex=i;
}


}

printf("\nRectangle with the largest area:\n");
printf("Area: %d\n", larea);


return 0;
}

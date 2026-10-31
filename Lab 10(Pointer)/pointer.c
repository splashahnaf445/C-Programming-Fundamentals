#include<stdio.h>

int swap(int *a,int *b){

    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int c=5,d=10;
    int res;
    swap(&c,&d);
    printf("%d %d",c,d);





return 0;
}

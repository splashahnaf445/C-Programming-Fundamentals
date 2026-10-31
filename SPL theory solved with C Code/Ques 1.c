#include<stdio.h>
#include<string.h>

int additems(int items[],int add[],int n){

    for(int i=0;i<n;i++){
        items[i]+=add[i];

    }

}
int openDoor(char password[],char str[]){

    if(strcmp(password,str)==0){
        printf("\nDoor to narnia is open");
    }else{
        printf("\nThere is no door");
    }

}
int main(){

int items[1000];
int add[1000];
int n,i;
char pw[20];
printf("How many numbers? ");
scanf("%d",&n);

printf("\nElements for 1st array ");
for(int i=0;i<n;i++){
    scanf("%d",&items[i]);
}
printf("\nElements for next array ");
for(int i=0;i<n;i++){
    scanf("%d",&add[i]);
}
int result;
result=additems(items,add,n);
printf("\result=%d",result);

printf("\nGive the password");
scanf("%s",pw);

char str='narnia';
openDoor(pw,str);


return 0;
}

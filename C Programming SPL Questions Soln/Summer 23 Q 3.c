#include<stdio.h>

struct Cricketer{

    char name[50];
    char country[50];
    char type[50];
    int wickets[30];
    float runs[30];
    int totalmatch;
    float overall;




};

int main(){

struct Cricketer crk[100];

int totalwickets(int wickets[]){
int sum=0;

for(int i=0;i<30;i++){
    sum+=wickets[i];
}
return sum;

}

int totalruns(int runs[]){
int run=0;

for(int i=0;i<30;i++){
    run+=runs[i];
}
return run;

}

for(int i=0;i<100;i++){
    printf("Enter %d th cricketers detail: ".i);
    getchar();
    printf("\nName: ");
    getchar();
    gets(crk[i].name);
    printf("\nCountry: ");
    getchar();
    gets(crk[i].country);
    printf("\nCricketer wickets in last 30 matches: ");
    for(int j=0;j<30;j++){
    scanf("%d",&crk[i].wickets[j]);
    }
    getchar();
    printf("\nTotal matches played in last year: ");
    scanf("%d",&crk[i].totalmatch);
    int sum=0;
    for(int j=0;j<30;j++){
        sum=sum+crk[i].wickets[j];
    }
    crk[i].overall=sum/crk[i].totalmatch;
    }
}



return 0;
}

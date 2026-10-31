#include<stdio.h>

int main(){

FILE *input,*output;

input=fopen("in.txt","r");

if(input==NULL){
    printf("Error");
    return 1;
}

int num;
int max;

while(fscanf(input, "%d", &num)!=EOF){
    if(num>max){
        max=num;
    }
}
fclose(input);

output=fopen("out.txt","w");

fprintf(output, "%d",max);

fclose(output);

}

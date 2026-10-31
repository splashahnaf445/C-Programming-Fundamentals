/*
Write a C program that reads text from a file named 'data.txt'. The program should count and print
the number of vowels and consonants present in the file. If the file does not exist, print an error
message.
*/
#include<stdio.h>

int main(){

FILE *input,*output;
input=fopen("data.txt","r");
if(input==NULL){
    printf("Error");
}

int v=0,c=0;
char cmp;

while(fscanf(input, "%c",&cmp)!=EOF){
    if((cmp=='a')||(cmp=='e')||(cmp=='i')||(cmp=='o')||(cmp=='u')){
        v++;
    }else{
        c++;
    }
}

fclose(input);

printf("Vowels= %d\nConsonants=%d",v,c);

return 0;
}

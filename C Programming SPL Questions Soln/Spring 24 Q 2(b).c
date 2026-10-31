// count number of vowels in a sentence


#include<stdio.h>

int main(){

char str[100];

printf("Give a sentence ");
gets(str);

int i=0;
int a=0,e=0,I=0,o=0,u=0;

int j=0;
while(str[j]!='\0'){
    if(str[j]<91 && str[j]!=" "){
        str[j]+=32;
    }
    j++;
}


while(str[i]!='\0'){
    if(str[i]=='a'){
        a++;
    }
    if(str[i]=='e'){
        e++;
    }
    if(str[i]=='i'){
        I++;
    }
    if(str[i]=='o'){
        o++;
    }
    if(str[i]=='u'){
        u++;
    }

    i++;
}
int count=a+e+I+o+u;

printf("Number of vowels in the sentence %d",count);


return 0;
}

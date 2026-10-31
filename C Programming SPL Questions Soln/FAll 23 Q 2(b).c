#include<stdio.h>

int main(){

char str[50];

int i=0,j=0;

printf("Give a string: ");
gets(str);

while(str[i]!='\0'){
    if(str[i]<91 && str[i]!=' '){
        str[i]+=32;
    }
    i++;
}
puts(str);
printf("\n");
int a=0,e=0,I=0,o=0,u=0;
while(str[j]!='\0'){
    if(str[j]=='a'){
        a++;
    }else if(str[j]=='e'){
        e++;
    }else if(str[j]=='i'){
        I++;
    }else if(str[j]=='o'){
        o++;
    }else if(str[j]=='u'){
        u++;}
    j++;
}
printf("\nThe number of different vowels in the string: \n");
printf("A/a: %d\nE/e: %d\nI/i: %d\nO/o: %d\nU/u: %d\n",a,e,I,o,u);

return 0;
}

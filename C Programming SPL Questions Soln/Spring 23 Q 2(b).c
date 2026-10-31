#include<stdio.h>

int main(){

char str[100];

printf("Write the messsage: \n");
gets(str);

int k=0;

while(str[k]!='\0'){
    if((str[k]!='A' || str[k]!='a') && (str[k]!='E' || str[k]!='e')&&(str[k]!='I' || str[k]!='i')&&(str[k]!='O' || str[k]!='o')&&(str[k]!='U' || str[k]!='u')){
        if(str[k]!=' ' && ((str[k]!='Z') || (str[k]!='z'))){
            str[k]+=1;
        }
    }else if(str[k]=='Z' && str[k]!=' '){
            str[k]=65;
        }
        else if(str[k]!='z' && str[k]!=' '){
                str[k]='a';
    }
    k++;
}

puts(str);



return 0;
}

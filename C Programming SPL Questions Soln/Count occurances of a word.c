#include<stdio.h>
void main(){

    int i=0,j=0,l,wl,count=0;
    char str[100],word[20];
    printf("Give the string : ");
    gets(str);

    printf("Which word do you want to search ? ");
    gets(word);

    l=strlen(str);
    wl=strlen(word);


    for(i=0;i<=l-wl;i++){
        for(j=0;j<wl;j++){
            if(str[i+j]!=word[j]){
                break;
            }
        }
        if(j==wl){
            if((i==0||str[i-1]==' ')&&(i+wl==l||str[i+wl]==' ')){
                count++;
            }
        }
    }

    printf("%d",count);

}

#include<stdio.h>

//7. Program that will take as input a string, and toggle cases of all the letters
// ASCII value for lowercase >96
// ASCII value for Uppercase <91

//If the Alphabet is Lowercase & not a space, add 32 & make it Uppercase
//If the Alphabet is Upperrcase  & not a space, add 32 & make it Lowercase

int togglecharacters(char str[]){

int i=0;

while(str[i]!='\0'){

    if(str[i]>96 && str[i]!=' '){
        str[i]-=32;
    }else if(str[i]!=' '){
        str[i]+=32;
    }
    i++;
}

}



int main(){
char str[30];
printf("\nEnter a String: ");
gets(str);

togglecharacters(str);


puts(str);

return 0;
}

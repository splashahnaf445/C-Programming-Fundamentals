// Write the output of the program

#include <stdio.h>
void go(int num){
printf("How are you?\n");
if(num==0){
return;
}
num /= 10;
go(num);
printf("I am fine\n");
}
int main(void){
int num = 45633;
go(num);
return 0;
}

/*

num= 45633

output: how are you?

num=4563

output: how are you?

num=456

output: how are you?

num=45

output: how are you?

num=4

output: how are you?

*/

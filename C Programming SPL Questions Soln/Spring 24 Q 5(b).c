#include<stdio.h>

int main(){

FILE *fp=fopen("String.txt","w");

fprintf(fp, "Yet another string\n");
fclose(fp);

FILE *fa=fopen("string.txt","a");

fprintf(fa,"This is another sting");
fclose(fa);

return 0;
}

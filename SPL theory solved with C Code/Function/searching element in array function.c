#include<stdio.h>

void input_array();
void search_array();

int n,x;
int arr[50];
void main(){

    input_array();
    search_array();

}
void input_array(){

    printf("give values :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


}
void search_array(){

    int found=0;
    printf("\nWhich no. to search? ");
    scanf("%d",&x);
    for(int j=0;j<n;j++){
        if(x=arr[j]){
            found=1;
            printf("Found at index %d",j);
        }

    }   if(!found){
            printf("Not found");
    }


}

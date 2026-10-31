

#include<stdio.h>

    int n,sum=0,avg=0,s;
    int arr[100];

void main(){
         input();
         display();
         reverse_display();
         add();
         average();
         sort();
         search();



}
void input(){
                printf("how many numbers ");
                scanf("%d",&n);

                printf("\ngive %d numbers ",n);
                for(int i=0;i<n;i++){
                    scanf("%d",&arr[i]);
            }


            }

void display(){
                printf("The numbers are: ");
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
            }


}

void reverse_display(){
                printf("\nThe reversed numbers are: ");
                for(int i=n-1;i>=0;i--){
                    printf("%d ",arr[i]);
            }


}
void add(){
                for(int j=0;j<n;j++){
                    sum=sum+arr[j];

                }
                printf("\nSum of %d numbers: %d",n,sum);

}
void average(){
                avg=sum/n;
                printf("\nAverage : %d",avg);

}

void sort(){
                int temp;
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        if(arr[i]>arr[j]){
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
                }

                printf("\nThe sorted numbers are: ");
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
            }

}
void search(){  int count=0;
                printf("\nWhich number to search ? ");
                scanf("%d",&s);
                for(int i=0;i<n;i++){
                        if(s==arr[i]){
                        count=1;
                        printf("\nFound at index %d",i);
                        }
                }
                if(!count){
                    printf("\nNot found");
                }

}

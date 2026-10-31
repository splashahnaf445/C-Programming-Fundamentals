#include<stdio.h>
void main(){


    int m,n,max=0,p,q;
    printf("Rows =");
    scanf("%d",&m);
    printf("Column =");
    scanf("%d",&n);
    int arr[m][n];

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);

            }
        }

max=arr[0][0];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(arr[i][j]>=max){
                    max=arr[i][j];
                    p=i;q=j;
                    }
                }
            }
            printf("maximum= %d",max);
            printf("location= [%d][%d]",p,q);

        }


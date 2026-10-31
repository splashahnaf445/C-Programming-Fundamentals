#include<stdio.h>
void main(){


    int m,n;
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
        //printf("The matrix: ");
        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){
                printf("%d ",arr[i][j]);

            }
            printf("\n");
        }

        printf("\nMajor Diagonal :");
        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){


                    printf("%d ",arr[i][j]);
                }
            }

        }
        printf("\nMinor Diagonal :");
        for(int i=0;i<m;i++){

            for(int j=n-1;j>=0;j--){
                    printf("%d ",arr[i][j]);
                }
            }



}

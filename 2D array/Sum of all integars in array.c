#include<stdio.h>
#include<math.h>

void main(){

    int r,c,sum=0;
    printf("Number of rows =");
    scanf("%d",&r);
    printf("Number of coloumn =");
    scanf("%d",&c);
    int arr[r][c];

    for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&arr[i][j]);
            }

    }

    for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sum=sum+arr[i][j];
            }

    }
    printf("sum= %d",sum);

}

#include<stdio.h>
void main(){

    int r,c;
    printf("Rows : ");
    scanf("%d",&r);
    printf("Column : ");
    scanf("%d",&c);
    int matA[r][c];
    int matB[r][c];
    int matC[r][c];
    printf("Give matrix A: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matA[i][j]);
        }
    }
    printf("Give matrix B: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matB[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            matC[i][j]=matA[i][j]+matB[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                printf("%d ",matC[i][j]);

        }
        printf("\n");

    }







}

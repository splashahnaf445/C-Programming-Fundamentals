#include<stdio.h>
void main(){


    int det=0;
    int arr[3][3];
    printf("Give a 3X3 matrix : ");


        for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){
                scanf("%d",&arr[i][j]);

            }

        }
        for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){
                printf("%d ",arr[i][j]);

            }
            printf("\n");

        }


                det=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]))-
                    arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]))-
                    arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));

        printf("Determiner : %d",det);

}

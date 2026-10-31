
// Find the output of the code

#include <stdio.h>
void modifyArray(int arr[], int
size){
for (int i = 0; i < size; i++){
arr[i] *= 2;
}
}
void main() {
int numbers[] = {1, 2, 3, 4, 5};
int *ptr = numbers;
modifyArray(ptr, 5);
for(int i = 0; i < 5; i++){
*(ptr+i) = *(ptr+i) + i;
printf("%d ", *(ptr+i));
  }

}


/* ptr={1,2,3,4,5}

    i=0; arr[0]=ptr[0]=1*2=2
    i=1; ptr[1]=4. ptr[2]=6, ptr[3]=8, ptr[4]=10   ;
    *ptr={ 2,4,6,8,10 }

    i=0; ptr[0]=2;  i=1; ptr[1]=5, ptr[2]=8; ptr[3]=11; ptr[4]=14 */

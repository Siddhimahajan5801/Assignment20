#include <stdio.h>

void sort(int *ptr, int size){
    int i,j;
    int max=*ptr;

    for (i=0; i<size-1; i++){
        for (j=i+1; j<size; j++){

            if ( *(ptr+i)>*(ptr+j) ){
                max=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=max;
            }
        }
    }
}

int main(){ 
  int arr[5]={5,6,2,1,3} ;  
  printf("The array (before sorting): \n");
  for (int i=0; i<5; i++)
    printf("%d  ", arr[i]);

 sort(arr, 5);
 printf("\nThe array in ascending order is(after sorting): \n");
    for (int i=0; i<5; i++)
    printf("%d  ", arr[i]);

return 0; 
}
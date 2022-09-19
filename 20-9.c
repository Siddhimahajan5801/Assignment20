#include <stdio.h>
int main(){ 
  int arr[5]={5,9,3,2,4};
  int *p= arr; 
  int i, temp;

  printf("The array is : \n");
  for (i=0; i<5; i++)
  printf("%d  ",arr[i]);

  for (i=0; i<3; i++){
     temp=*(p+i);
     *(p+i)= *(p+4-i);
     *(p+4-i)=temp;
  }

  printf("\nThe array in reverse order is : \n");
  for (i=0; i<5; i++)
  printf("%d  ",arr[i]);



return 0; 
}
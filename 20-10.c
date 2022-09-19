#include <stdio.h>
int main(){ 
  char str[5]={'h','e','l','l','o'},temp;
  char *p= str; 
  int i;

  printf("The string is : \n");
  for (i=0; i<5; i++)
  printf("%c  ",str[i]);

  for (i=0; i<3; i++){
     temp=*(p+i);
     *(p+i)= *(p+4-i);
     *(p+4-i)=temp;
  }

  printf("\nThe array in reverse order is : \n");
  for (i=0; i<5; i++)
  printf("%c  ",str[i]);



return 0; 
}
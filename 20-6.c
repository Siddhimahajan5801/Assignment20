#include <stdio.h>
#include<string.h>

int length(char *a){
    int i;
    for (i=0; *(a+i); i++);
    return i;
}

int main(){ 
  char str[20];

  printf("Enter your string : \n");
  gets(str);

  int l=length(str); 
  printf("The length of the string is : %d",l);


return 0; 
}
#include <stdio.h>
int max_no(int*a, int*b){
   if (*a>*b)
   return *a;

   else return *b;
}


int main(){ 
  int n1,n2,max;

  printf("Enter the two numbers :");
  scanf("%d %d", &n1, &n2);

 max=max_no(&n1, &n2);  
 printf("The maximum number between %d and %d is : %d \n",n1,n2,max); 
return 0; 
}
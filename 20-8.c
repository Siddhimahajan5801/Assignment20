#include <stdio.h>
int main(){ 
int arr[5]={1,2,3,4,5};  
int *p=arr; 
int i,sum=0; 

for (i=0; i<5; i++){
   sum=sum+*p;
   p++;
}
printf("The sum is : %d",sum);
return 0; 
}
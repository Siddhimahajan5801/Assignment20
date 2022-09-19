#include <stdio.h>
void swap(int*, int*);

int main(){ 
       int a,b;

       printf("Enter the values of a and b respectively :\n");
       scanf("%d %d", &a, &b);
       printf("Before swapping a=%d and b=%d \n",a,b);

       // To swap the values of a and b 
       swap(&a, &b);
       printf("After swapping a=%d and b=%d",a,b);
return 0; 
}

void swap (int *p, int *q){
    int temp;

    temp=*p;
    *p=*q;
    *q=temp;
}
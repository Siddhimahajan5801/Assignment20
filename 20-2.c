#include <stdio.h>

void swap(char **p, char **q ){
    char *temp;

    temp=*p;
    *p=*q;
    *q=temp;
}

int main(){ 
    char *str1[20];
    char *str2[20];

    printf("Enter string1 :");
    gets(str1);

    printf("Enter string2 :");
    gets(str2);

    //To swap two strings :
    swap(&str1, &str2);
    printf("After swapping \n");
    printf("The string1 is : %s \n", str1);
    printf("The string2 is : %s \n", str2);
    

return 0; 
}


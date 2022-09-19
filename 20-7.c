#include <stdio.h>
#include <string.h>

int main(){ 
   char str[20];
   int vowel=0, conso=0;
   char *p = str;

   printf("Enter your string : \n");
   fgets(str, 20, stdin);  

   for (p=str; *p; p++){
    if (*p=='a'|| *p=='e' || *p=='i' || *p=='o'|| *p=='u'|| *p=='A'|| *p=='E' || *p=='I' || *p=='O'|| *p=='U')
    vowel++;

    else conso++;
   }

   printf("The no of vowels in the given string is : %d\n", vowel);
   printf("The no of consonents in the given string is : %d\n", conso);


return 0; 
}
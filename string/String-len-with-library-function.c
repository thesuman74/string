#include<stdio.h>
#include<string.h>

int main() {
   char str[100];
   int len;

   printf("Enter a String : ");
   gets(str);

   len = strlen(str);

   printf("Length of Given String : %d\n", len);
   return(0);
}

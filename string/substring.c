#include <stdio.h>
int main()
{
   char str[100], sstr[100];
   int pos, l, c = 0;

      printf("Input the string : ");
       gets(str);

   printf("Input the position to start extraction :");
   scanf("%d", &pos);

   printf("Input the length of substring :");
   scanf("%d",&l);

   while (c < l)
   {
      sstr[c] = str[pos+c-1];
      c++;
   }
   sstr[c] = '\0';

   printf("The substring retrieve from the string is :  %s \n\n", sstr);

}

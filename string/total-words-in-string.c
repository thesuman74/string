#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char str[100];
    int i, wrd;

       printf("Input the string : ");
       fgets(str, sizeof str, stdin);

    i = 0;
    wrd = 1;

    while(str[i]!='\0')
    {
        /* check whether the current character is white space or new line or tab character*/
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", wrd-1);
}

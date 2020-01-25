#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char str1[100], str2[100];
    int flg=0;

      printf("Input the 1st string : ");
       gets(str1);

       printf("Input the 2nd string : ");
       gets(str2);

    int i=0;

    /* Runs till both strings are equal */
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' || str2[i] == '\0')
            break;

        i++;
    }
    if(str1[i-1] == '\0' && str2[i-1]=='\0')
        flg=0;
    else if(str1[i] > str2[i])
        flg=1;
    else if(str1[i] < str2[i])
        flg=-1;

    if(flg == 0)
    {
        printf("\nThe length of both strings are equal and \nalso both strings are equal.\n\n");
    }
    else if(flg == -1)
    {
        printf("\nThe length of the first string is smaller than second.\n\n");
    }
    else
    {
        printf("\nThe length of the first string is greater than second.\n\n");
    }
}

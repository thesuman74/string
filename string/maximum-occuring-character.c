#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char str[100];
    int ch_fre[200];
    int i = 0, max;
    int ascii;

     printf("Input the string : ");
       gets(str);


    for(i=0; i<200; i++)  //Set frequency of all characters to 0
    {
        ch_fre[i] = 0;
    }


    /* Read for frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        ch_fre[ascii] += 1;

        i++;
    }

    max = 0;
    for(i=0; i<200; i++)
    {
        if(i!=32)
        {
        if(ch_fre[i] > ch_fre[max])
            max = i;
        }
    }
    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, ch_fre[max]);
}

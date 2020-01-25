#include<stdio.h>
#include<ctype.h>

int main()
{
    int ctr=0;
    char str_char;
    char str[100];



    printf("\n Input a string in lowercase : ");
    gets(str);

    printf("In UPPERCASE :\n ");
    while (str[ctr])
    {
        str_char=str[ctr];
        putchar (toupper(str_char));
        ctr++;
    }
    printf("\n\n");
    return 0;
}

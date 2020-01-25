#include <stdio.h>
#include <string.h>


int main()
{
    char string[50];
    int i, l = 0;

    printf("Input a string : ");
    scanf("%s", string);

    for (i = 0; string[i] != '\0'; i++)
    {
        l++;
    }
    printf("The length of the string %s is : %d\n\n", string, l);
}

#include <stdio.h>

int main()
{
    char str[80],search[20];
    int c1=0,c2=0,i,j,flg=0;


        printf("Input the string : ");
        gets(str);

    printf("Input the substring to be search : ");
    gets(search);

    while (str[c1]!='\0')
        c1++;
                c1--;

    while (search[c2]!='\0')
        c2++;
                c2--;


    for(i=0;i<=c1-c2;i++)
    {
        for(j=i;j<i+c2;j++)
        {
            flg=1;
            if (str[j]!=search[j-i])
            {
                flg=0;
               break;
            }
        }
        if (flg==1)
            break;
    }
    if (flg==1)
        printf("The substring exists in the string.\n\n");
    else
        printf("The substring is not exists in the string. \n\n");
}

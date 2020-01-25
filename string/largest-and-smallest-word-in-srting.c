#include <stdio.h>



int main()
{
    printf("Enter a string\n");
    char string[100];
    gets(string);
    char words[100][100], small[100], large[100];
    int i = 0, j = 0, k, length;

      for(k=0; string[k]!='\0'; k++){


        if(string[k] != ' ' && string[k] != '\0'){
            words[i][j++] = string[k];
        }
        else{
            words[i][j] = '\0';

            i++;

            j = 0;
        }
    }


    length = i + 1;


    strcpy(small, words[0]);
    strcpy(large, words[0]);


    for(k = 0; k < length; k++){

        if(strlen(small) > strlen(words[k])){
            strcpy(small, words[k]);
        }
        if(strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }

    printf("\n\nLargest word: %s", large);

    printf("\n\nSmallest word: %s\n", small);


    return 0;
}

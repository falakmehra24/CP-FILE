#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], copy[100];
    // Taking input
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // strlen()
    printf("\nLength of first string = %lu\n", strlen(str1));

    // strcat()
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    // strcpy()
    strcpy(copy, str2);
    printf("Copied string = %s\n", copy);

    // strcmp()
    if(strcmp(str1, str2) == 0)
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    // strrev()
    strrev(str2);
    printf("Reversed second string = %s\n", str2);
    return 0;
}

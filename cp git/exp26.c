#include <stdio.h>
#include <string.h>
int main()   {
    char str[100], sub[100];
    int i, j, count = 0;
    int strLen, subLen;
    printf("Enter the main string: ");
    gets(str);
    printf("Enter the substring: ");
    gets(sub);

    // Finding lengths
    strLen = strlen(str);
    subLen = strlen(sub);

    // Checking substring occurrences
    for(i = 0; i <= strLen - subLen; i++)
    {
        for(j = 0; j < subLen; j++)
        {
            if(str[i + j] != sub[j])
            {
                break;
            }
        }
        if(j == subLen)
        {
            count++;
        }
    }

    // Display result
    printf("Total appearances of substring = %d", count);
    return 0;
}

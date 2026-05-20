#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp, *temp;
    char word[100], replace[100], str[1000];
    int count = 0;

    // Opening file
    fp = fopen("test.txt", "r");
    temp = fopen("temp.txt", "w");
    if(fp == NULL)
    {
        printf("File not found.");
        return 0;
    }

    // Taking input
    printf("Enter word to find: ");
    scanf("%s", word);
    printf("Enter replacement word: ");
    scanf("%s", replace);

    // Reading file line by line
    while(fgets(str, sizeof(str), fp))
    {
        char *pos;

        // Searching word
        while((pos = strstr(str, word)) != NULL)
        {
            count++;

            // Replacing word
            char buffer[1000];
            int index = pos - str;
            str[index] = '\0';
            strcpy(buffer, str);
            strcat(buffer, replace);
            strcat(buffer, pos + strlen(word));
            strcpy(str, buffer);
        }

        // Writing modified content
        fputs(str, temp);
    }

    // Closing files
    fclose(fp);
    fclose(temp);

    // Display result
    printf("Total appearances of '%s' = %d\n", word, count);
    printf("Replacement completed successfully.");
    return 0;
}

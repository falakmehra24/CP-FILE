#include <stdio.h>
int main() {
    char ch;
    int num;

    // Checking vowel or consonant
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    switch(ch)   {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("It is a vowel.\n");
            break;
        default:
            printf("It is a consonant.\n");
    }

    // Checking positive, negative or zero
    printf("\nEnter a number: ");
    scanf("%d", &num);
    switch(num > 0) {
        case 1:
            printf("The number is positive.");
            break;
        case 0:
            switch(num < 0)   {
                case 1:
                    printf("The number is negative.");
                    break;
                case 0:
                    printf("The number is zero.");
                    break;
            }
    }
    return 0;
}

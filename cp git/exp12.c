#include <stdio.h>
int main() {
    int num, originalNum, digit, count = 0, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    // Counting digits and reversing number
    while(num != 0) {
        digit = num % 10;
        count++;
        reverse = reverse * 10 + digit;
        num = num / 10; }
    printf("Number of digits = %d\n", count);
    printf("Reverse of the number = %d", reverse);
    return 0;     }

#include <stdio.h>
int main()
 {
    int num, originalNum, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    // Calculating sum of cubes of digits
    for( ; num != 0; num = num / 10) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
    }

    // Checking Armstrong number
    if(sum == originalNum) {
        printf("%d is an Armstrong number.", originalNum);
    }
    else {
        printf("%d is not an Armstrong number.", originalNum);
    }
    return 0;
}

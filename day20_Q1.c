//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;
    scanf("%d", &num);
    while(num != 0) {
        digit = num % 10;
        if(digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }
    if(hasOdd)
        printf("%d\n", product);
    else
        printf("No odd digits\n");
    return 0;
}

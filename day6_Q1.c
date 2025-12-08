//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}

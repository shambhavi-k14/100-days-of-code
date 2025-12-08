//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0, n = 0;
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while(temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }
    if(sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}

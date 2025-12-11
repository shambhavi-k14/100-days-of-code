//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 2, den = 3;

    for(i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Sum = %.2f", sum);

    return 0;
}

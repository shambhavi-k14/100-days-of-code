#include <stdio.h>

enum Month {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for (int m = JAN; m <= DEC; m++)
        printf("%d -> %d\n", m, days[m]);
    return 0;
}

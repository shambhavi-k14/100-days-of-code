#include <stdio.h>

enum Level {LOW, MEDIUM, HIGH};

int main() {
    for (int i = LOW; i <= HIGH; i++)
        printf("%d\n", i);
    return 0;
}

#include <stdio.h>

struct Date {
    int d, m, y;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;
    scanf("%s %d %d %d %d", e.name, &e.id, &e.join.d, &e.join.m, &e.join.y);
    printf("%s %d %02d-%02d-%04d", e.name, e.id, e.join.d, e.join.m, e.join.y);
    return 0;
}

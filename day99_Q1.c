#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *p = malloc(sizeof(struct Student));
    scanf("%s %d %f", p->name, &p->roll, &p->marks);
    printf("%s %d %.2f", p->name, p->roll, p->marks);
    free(p);
    return 0;
}

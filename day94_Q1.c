#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("%s %d %.2f", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student x;
    scanf("%s %d %f", x.name, &x.roll_no, &x.marks);
    printStudent(x);
    return 0;
}

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTop(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i=1;i<n;i++)
        if (s[i].marks > top.marks) top = s[i];
    return top;
}

int main() {
    struct Student s[5], t;
    for (int i=0;i<5;i++) scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    t = getTop(s, 5);
    printf("%s %d %.2f", t.name, t.roll_no, t.marks);
    return 0;
}

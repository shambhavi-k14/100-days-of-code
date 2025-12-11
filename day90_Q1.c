#include <stdio.h>

enum Gender {MALE, FEMALE};

struct Person {
    char name[50];
    enum Gender g;
};

int main() {
    struct Person p = {"Amit", MALE};
    if (p.g == MALE) printf("Male");
    else printf("Female");
    return 0;
}

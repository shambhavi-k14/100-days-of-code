#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role r = USER;
    if (r == ADMIN) printf("Admin access");
    else if (r == USER) printf("User access");
    else printf("Guest access");
    return 0;
}

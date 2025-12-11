#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s = TIMEOUT;
    if (s == SUCCESS) printf("Success");
    else if (s == FAILURE) printf("Failure");
    else printf("Timeout");
    return 0;
}

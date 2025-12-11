#include <stdio.h>

enum Light {RED, YELLOW, GREEN};

int main() {
    enum Light s = RED;
    if (s == RED) printf("Stop");
    else if (s == YELLOW) printf("Wait");
    else printf("Go");
    return 0;
}

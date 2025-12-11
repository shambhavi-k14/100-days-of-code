//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], c[200];
    gets(a);
    gets(b);
    if(strlen(a)!=strlen(b)) {
        printf("No");
        return 0;
    }
    strcpy(c, a);
    strcat(c, a);
    if(strstr(c, b)) printf("Yes");
    else printf("No");
    return 0;
}

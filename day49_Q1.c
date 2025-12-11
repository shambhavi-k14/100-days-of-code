//Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i;
    gets(s);
    printf("%c", toupper(s[0]));
    for(i = 1; s[i]; i++)
        if(s[i] == ' ')
            printf(" %c", toupper(s[i+1]));
    return 0;
}

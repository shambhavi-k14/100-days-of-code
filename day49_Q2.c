//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, last = 0;
    gets(s);
    printf("%c ", toupper(s[0]));
    for(i = 1; s[i]; i++)
        if(s[i] == ' ') {
            last = i;
            printf("%c ", toupper(s[i+1]));
        }
    printf("%s", s + last + 1);
    return 0;
}

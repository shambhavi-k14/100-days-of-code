#include <stdio.h>

int main() {
    char s[500];
    fgets(s, 500, stdin);
    int i;
    if(s[0]>='a' && s[0]<='z') s[0] -= 32;
    for(i=1;s[i];i++)
        if(s[i]>='A' && s[i]<='Z') s[i] += 32;
    printf("%s", s);
    return 0;
}

//Find the longest word in a sentence.


#include <stdio.h>
#include <string.h>

int main() {
    char s[200], w[50], longest[50];
    int i = 0, j = 0, max = 0;
    gets(s);
    while(s[i]) {
        if(s[i] != ' ') w[j++] = s[i];
        else {
            w[j] = '\0';
            if(j > max) { max = j; strcpy(longest, w); }
            j = 0;
        }
        i++;
    }
    w[j] = '\0';
    if(j > max) strcpy(longest, w);
    printf("%s", longest);
    return 0;
}

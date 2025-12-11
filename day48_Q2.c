//Reverse each word in a sentence without changing the word order

#include <stdio.h>
#include <string.h>

int main() {
    char s[200], w[100];
    int i = 0, j = 0, k;
    gets(s);
    while(s[i]) {
        if(s[i] != ' ') w[j++] = s[i];
        else {
            for(k = j-1; k >= 0; k--) printf("%c", w[k]);
            printf(" ");
            j = 0;
        }
        i++;
    }
    for(k = j-1; k >= 0; k--) printf("%c", w[k]);
    return 0;
}

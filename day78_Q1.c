#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    char ch;
    int v = 0, c = 0;
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }
    printf("Vowels: %d\nConsonants: %d", v, c);
    fclose(fp);
    return 0;
}

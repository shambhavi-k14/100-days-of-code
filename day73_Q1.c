#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 1;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ')
            words++;
        if (ch == '\n') {
            lines++;
            words++;
        }
    }
    printf("Characters: %d\nWords: %d\nLines: %d", chars, words, lines);
    fclose(fp);
    return 0;
}

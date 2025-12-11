#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "a");
    char line[200];
    printf("Enter text to append: ");
    getchar();
    gets(line);
    fprintf(fp, "%s\n", line);
    fclose(fp);
    return 0;
}

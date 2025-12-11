#include <stdio.h>

int main() {
    char src[50], dest[50];
    printf("Enter source file: ");
    scanf("%s", src);
    printf("Enter destination file: ");
    scanf("%s", dest);
    FILE *fs = fopen(src, "r");
    FILE *fd = fopen(dest, "w");
    int c;
    while ((c = fgetc(fs)) != EOF)
        fputc(c, fd);
    fclose(fs);
    fclose(fd);
    return 0;
}

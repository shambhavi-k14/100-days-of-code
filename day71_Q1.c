#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    char name[50];
    int age;
    printf("Enter name: ");
    gets(name);
    printf("Enter age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data written successfully.");
    return 0;
}

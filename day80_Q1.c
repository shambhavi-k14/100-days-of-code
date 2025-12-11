#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    int n, i, roll;
    char name[50];
    float marks;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter name roll marks: ");
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF)
        printf("%s %d %.2f\n", name, roll, marks);
    fclose(fp);
    return 0;
}

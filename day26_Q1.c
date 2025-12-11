//Write a program to print the following pattern:
    5
   45
  345
 2345
12345

  #include <stdio.h>
int main() {
    int i, j, start;
    for(i=1;i<=5;i++){
        for(j=5;j>i;j--)
            printf(" ");
        start=6-i;
        for(j=i;j<=5;j++){
            printf("%d", start);
            start++;
        }
        printf("\n");
    }
    return 0;
}

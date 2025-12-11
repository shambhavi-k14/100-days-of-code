//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char d[3], m[3], y[5];
    char month[][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    scanf("%2s/%2s/%4s", d, m, y);
    printf("%s-%s-%s", d, month[atoi(m)-1], y);
    return 0;
}

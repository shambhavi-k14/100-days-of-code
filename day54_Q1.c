#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    int x = sqrt(n*(n+1)/2);
    if(x*x == n*(n+1)/2) printf("%d", x);
    else printf("-1");
    return 0;
}

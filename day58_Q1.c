#include <stdio.h>

int main() {
    int n, i;
    scanf("%d",&n);
    int a[n], L[n], R[n], ans[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    L[0]=1;
    for(i=1;i<n;i++) L[i]=L[i-1]*a[i-1];
    R[n-1]=1;
    for(i=n-2;i>=0;i--) R[i]=R[i+1]*a[i+1];
    for(i=0;i<n;i++) ans[i]=L[i]*R[i];
    for(i=0;i<n;i++) printf("%d ", ans[i]);
    return 0;
}

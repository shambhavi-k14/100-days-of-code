#include <stdio.h>

int main() {
    int n, k, i, sum=0, max;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<k;i++) sum+=a[i];
    max=sum;
    for(i=k;i<n;i++){
        sum=sum-a[i-k]+a[i];
        if(sum>max) max=sum;
    }
    printf("%d", max);
    return 0;
}

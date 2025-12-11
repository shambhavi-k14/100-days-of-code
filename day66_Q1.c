#include <stdio.h>

int main() {
    int n, target, i, j, found=0;
    scanf("%d%d",&n,&target);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n && !found;i++)
        for(j=i+1;j<n;j++)
            if(a[i]+a[j]==target){
                printf("%d %d", i, j);
                found=1;
                break;
            }
    if(!found) printf("-1 -1");
    return 0;
}

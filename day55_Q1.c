#include <stdio.h>

int main() {
    int n, i, count=0, cand=-1, freq=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(count==0){ cand=a[i]; count=1; }
        else if(a[i]==cand) count++;
        else count--;
    }
    for(i=0;i<n;i++) if(a[i]==cand) freq++;
    if(freq>n/2) printf("%d", cand);
    else printf("-1");
    return 0;
}

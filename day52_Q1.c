 #include <stdio.h>

int main() {
    int n, x, i, l=0, r, mid, ans=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]>=x){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    printf("%d", ans);
    return 0;
}

//Search in a sorted array using binary search.

#include <stdio.h>
int main() {
    int n,i,a[100],x,l=0,h,m;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    h=n-1;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==x){ printf("%d",m); return 0; }
        else if(a[m]<x) l=m+1;
        else h=m-1;
    }
    printf("-1");
    return 0;
}

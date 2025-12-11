//Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n,i,a[100],max1=-1e9,max2=-1e9;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max1){ max2=max1; max1=a[i]; }
        else if(a[i]>max2 && a[i]!=max1) max2=a[i];
    }
    printf("%d",max2);
    return 0;
}

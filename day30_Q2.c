//Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main() {
    int n,i,a[100],p=0,neg=0,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0) p++;
        else if(a[i]<0) neg++;
        else z++;
    }
    printf("%d %d %d", p, neg, z);
    return 0;
}

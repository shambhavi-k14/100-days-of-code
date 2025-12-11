Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.


#include <stdio.h>

int main() {
    int n, target, i, l=0, r, mid, first=-1, last=-1;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&target);
    r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==target){ first=mid; r=mid-1; }
        else if(a[mid]<target) l=mid+1;
        else r=mid-1;
    }
    l=0; r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==target){ last=mid; l=mid+1; }
        else if(a[mid]<target) l=mid+1;
        else r=mid-1;
    }
    printf("%d %d", first, last);
    return 0;

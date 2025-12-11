//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int n,d,c[10]={0},i,max=0,ans=0;
    scanf("%d",&n);
    while(n>0){ d=n%10; c[d]++; n/=10; }
    for(i=0;i<10;i++) if(c[i]>max){ max=c[i]; ans=i; }
    printf("%d",ans);
    return 0;
}

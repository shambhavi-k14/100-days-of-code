//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() {
    int n,i,j,a[10][10],flag=1;
    int used[1000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++){
        int v=a[i][i];
        if(used[v]) flag=0;
        used[v]=1;
    }
    if(flag) printf("Distinct");
    else printf("Not Distinct");
    return 0;
}

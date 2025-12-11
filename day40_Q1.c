//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int r,c,i,j,a[10][10];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int d=0; d<r+c-1; d++){
        for(i=0;i<=d;i++){
            j=d-i;
            if(i<r && j<c) printf("%d ",a[i][j]);
        }
    }
    return 0;
}

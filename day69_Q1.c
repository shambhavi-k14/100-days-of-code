#include <stdio.h>

int main() {
    int n, i;
    scanf("%d",&n);
    int a[n], freq[100000]={0};
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[a[i]]++;
        if(freq[a[i]]==2){
            printf("%d", a[i]);
            return 0;
        }
    }
    return 0;
}

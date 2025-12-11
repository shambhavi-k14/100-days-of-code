#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    scanf("%s", s);
    int freq[256]={0}, i, j=0, max=0, len=strlen(s);
    for(i=0;i<len;i++){
        freq[s[i]]++;
        while(freq[s[i]]>1){
            freq[s[j]]--;
            j++;
        }
        if(i-j+1 > max) max = i-j+1;
    }
    printf("%d", max);
    return 0;
}

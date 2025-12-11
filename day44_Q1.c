//Count spaces, digits, and special characters in a string.


#include <stdio.h>
int main() {
    char s[200];
    int i,sp=0,d=0,sc=0;
    fgets(s,200,stdin);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' ') sp++;
        else if(s[i]>='0'&&s[i]<='9') d++;
        else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'));
        else sc++;
    }
    printf("%d %d %d",sp,d,sc);
    return 0;
}


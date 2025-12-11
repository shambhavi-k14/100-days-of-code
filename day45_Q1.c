//Count frequency of a given character in a string.

#include <stdio.h>
int main() {
    char s[200],ch;
    int i,c=0;
    fgets(s,200,stdin);
    scanf("%c",&ch);
    for(i=0;s[i]!='\0';i++)
        if(s[i]==ch) c++;
    printf("%d",c);
    return 0;
}

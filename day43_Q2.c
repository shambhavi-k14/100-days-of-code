//Check if a string is a palindrome.


#include <stdio.h>
int main() {
    char s[100];
    int i,j,f=1;
    fgets(s,100,stdin);
    for(i=0;s[i]!='\0';i++);
    j=i-2;
    for(i=0;i<j;i++,j--)
        if(s[i]!=s[j]) f=0;
    if(f) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}

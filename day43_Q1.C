//Reverse a string.

#include <stdio.h>
int main() {
    char s[100],t;
    int i,j;
    fgets(s,100,stdin);
    for(i=0;s[i]!='\0';i++);
    j=i-2;
    i=0;
    while(i<j){
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++; j--;
    }
    printf("%s",s);
    return 0;
}

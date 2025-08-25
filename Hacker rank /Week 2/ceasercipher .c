#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);  // length of string

    char s[n];      // +1 for null terminator
    scanf("%s", s);
    int m;
    scanf("%d", &m);

    int len = strlen(s);
    for(int i=0;i<len;i++) {
        if(s[i]>='a' && s[i]<='z') {
            s[i] = (s[i]-'a'+m)%26 + 'a';
        }
        else if(s[i]>='A' && s[i]<='Z') {
            s[i] = (s[i]-'A'+m)%26 + 'A';
        }
    }

    printf("%s\n",s);
    return 0;
}
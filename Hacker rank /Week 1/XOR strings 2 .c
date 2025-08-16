#include <stdio.h>
#include <string.h>

int main() {
    char b1[100], b2[100], out[100];
    int i;

    scanf("%s", b1);
    scanf("%s", b2);

    if (strlen(b1) != strlen(b2)) {
        printf("same length\n");
        return 0;
    }

    for (i = 0; i < strlen(b1); i++) {
        if (b1[i] == b2[i]) {
            out[i] = '0';
        } else {
            out[i] = '1';
        }
    }
    out[i] = '\0';  

    printf("%s\n", out);

    return 0;
}
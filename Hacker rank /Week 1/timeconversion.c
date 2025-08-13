#include <stdio.h>

int main() {
    int h, m, s;
    char amrpm [3]; 
    
    scanf("%2d:%2d:%2d%2s", &h, &m, &s,amrpm);
    
    if (amrpm[0] == 'A' && h == 12) h = 0;
    if (amrpm[0] == 'P' && h != 12) h += 12;
    
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
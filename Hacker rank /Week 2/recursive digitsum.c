#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main ()
 {
    
    char a[100000];
    scanf("%s",&a);
    int k;
    scanf("%d",&k);
    long long sum=0;
    for(int i=0;a[i]!='\0';i++)
    {
        sum+=a[i]-'0';
        
        
    }
    long long mul=k*sum; 
    
    while (mul >= 10) {
        long long temp = 0;
        while (mul > 0) {
            temp += mul % 10;
            mul /= 10;
        }
        mul = temp;
    }

    printf("%lld\n", mul);

    return 0;
 }
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[100];   // just fix some size
    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);
    }

    int d,m;
    scanf("%d %d",&d,&m);

    int s=0;
    for(int k=0;k<m;k++){
        s+=a[k];
    }

    int cnt=0;
    if(s==d) cnt++;

    for(int k=m;k<n;k++){
        s=s-a[k-m]+a[k];   // move window
        if(s==d) cnt++;
    }

    printf("%d",cnt);

    return 0;
}

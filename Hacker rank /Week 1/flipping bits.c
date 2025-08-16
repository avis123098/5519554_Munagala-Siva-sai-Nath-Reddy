int main() {
    int t;
    scanf("%d",&t);

    while(t>0) {
        unsigned int n;
        scanf("%u",&n);

        unsigned int ans = n ^ 0xFFFFFFFF;  
        printf("%u\n",ans);

        t--; 
    }

    return 0;
}
#include <stdio.h> 
int main(void) {
    int n,k;
    int coin = 0;
    int a[10];
    scanf("%d %d", &n,&k);
    for (int i = 0;i < n;i++) scanf("%d", &a[i]);
    for (int i = n - 1;i >= 0;i--) {  // 큰 단위부터 먼저 나눈다
        if (k % a[i] != k) { 
            coin += k / a[i]; 
            k %= a[i];
        }
        if (k == 0) break;
    }
    printf("%d", coin);
    
}
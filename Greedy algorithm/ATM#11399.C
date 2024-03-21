#include <stdio.h> 
int main(void) {
    int n;
    int a[1000], b = 0;
    scanf("%d", &n);
    int m = n;
    for (int i = 0;i < n;i++) scanf("%d", &a[i]);

    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            if (a[i] > a[j]) {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }

    for (int i = 0;i < n;i++) {
        b += a[i] * m;
        m--;
    }
    printf("%d", b);
}
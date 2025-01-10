#include <stdio.h>

int main() {
    int a, n, c = 1;
    printf("a: ");
    scanf("%d", &a);
    printf("n: ");
    scanf("%d", &n);

    while (n > 0) {
    c *= a;
    n--;
    }

    printf("a^n: %d \n", c);

    return 0;
}

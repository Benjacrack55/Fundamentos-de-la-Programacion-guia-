#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Numero 1: ");
    scanf("%d", &n1);
    printf("Numero 2: ");
    scanf("%d", &n2);
    printf("Numero 3: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("Mayor: %d \n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("Mayor: %d \n", n2);
    } else {
        printf("Mayor: %d \n", n3);
    }

    return 0;
}

#include <stdio.h>

int main(){
    int n;
    printf("Numero: ");
    scanf("%d", &n);
    int i = 1;

    while (i <= n) {
        printf("%d ", i);
        i *= 3;
    } printf("\n");

    return 0;
}

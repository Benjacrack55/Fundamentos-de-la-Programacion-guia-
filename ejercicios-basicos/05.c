#include <stdio.h>

int main(){
    int n;
    printf("Numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d es par \n", n);
    } else {
        printf("%d es impar \n", n);
    }

    if (n == 0) {
        printf("%d es cero \n", n);
    } else if (n > 0) {
        printf("%d es mayor a 0 \n", n);
    } else {
        printf("%d es menor a 0 \n", n);
    }

    return 0;
}

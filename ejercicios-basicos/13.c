#include <stdio.h>

int main(){
    int factorial;
    int n;
    printf("n: ");
    scanf("%d", &n);
    factorial = 1;

    if (n < 0 ) {
        printf("no se puede calcular el factorial del número ingresado \n");
    } else if (n == 0 || n == 1) {
        factorial = 1;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial de %d: %d \n", n, factorial);
    }

    return 0;
}

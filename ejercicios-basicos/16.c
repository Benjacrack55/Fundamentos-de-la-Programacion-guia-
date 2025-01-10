#include <stdio.h>

int main(){
    int num;
    printf("Numero: ");
    scanf("%d", &num);
    int pares = 0;
    int impares = 0;
    int mayor = num % 10;
    int menor = num % 10;
    int n = num;

    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        if (n % 10 > mayor) {
            mayor = n % 10;
        } else if (n % 10 < menor) {
            menor = n % 10;
        }
        n /= 10;
    }

    printf("Cantidad de pares: %d, cantidad de impares: %d, mayor numero: %d, menor numero: %d \n", pares, impares, mayor, menor);
    
    return 0;
}

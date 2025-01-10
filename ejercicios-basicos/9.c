#include <stdio.h>

int main(){
    char tipo;
    float temp;

    printf("(C)elcius o (F)ahrenheit: ");
    scanf(" %c", &tipo);
    printf("Temperatura: ");
    scanf("%f", &temp);

    if (tipo == 'F') {
        printf("Temperatura en celcius: %f", 5.0 / 9.0 * (temp - 32));
    } if (tipo == 'C') {
        printf("Temperatura en fahrenheit: %f", temp * 9.0 / 5.0 + 32);
    } else {
        printf("Tipo de temperatura invalido \n");
    }

    return 0;
}

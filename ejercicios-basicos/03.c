#include <stdio.h>

int main() {
    float radio;
    printf("Radio del circulo: ");
    scanf("%f", &radio);

    printf("Volumen de la esfera: %f \n", 1.33 * 3.14 * (radio*radio*radio));

    return 0;
}

#include <stdio.h>

int main(){
    float num;
    printf("Numero (0 para terminar): ");
    scanf("%f", &num);
    float mayor = num;
    float menor = num;
    float promedio = num;
    int i = 0;

    while (num != 0) {
        printf("Numero (0 para terminar): ");
        scanf("%f", &num);
        if (num != 0) {
            if (num > mayor) {
                mayor = num;
            } else if (num < menor) {
                menor = num;
            }
            promedio += num;
            i++;
        }
    }
    printf("Mayor: %f, menor: %f, promedio: %f \n", mayor, menor, promedio / i);
    
    return 0;
}

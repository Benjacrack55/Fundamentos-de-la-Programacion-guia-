#include <stdio.h>

int main() {
    int mes;
    printf("Ingrese un numero del 1 al 12: ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Mes invalido \n");
    } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        printf("Este mes tiene 31 dias \n");
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        printf("Este mes tiene 30 dias \n");
    } else {
        printf("Este mes tiene 28 dias \n");
    }

/*
    switch (mes) {
        case 2:
            printf("Este mes tiene 28 dias \n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Este mes tiene 30 dias \n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Este mes tiene 31 dias \n");
            break;
        default:
            printf("Mes invalido \n");
            break;
    }
*/

    return 0;
}

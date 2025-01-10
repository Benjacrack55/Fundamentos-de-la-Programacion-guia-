#include <stdio.h>

int main(){
    int dia;

    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &dia);

    if (dia < 0 || dia > 7) {
        printf("Dia invalido \n");
    } else if (dia == 1) {
        printf("Lunes \n");
    } else if (dia == 2) {
        printf("Martes \n");
    } else if (dia == 3) {
        printf("Miercoles \n");
    } else if (dia == 4) {
        printf("Jueves \n");
    } else if (dia == 5) {
        printf("Viernes \n");
    } else if (dia == 6) {
        printf("Sabado \n");
    } else {
        printf("Domingo \n");
    }

/*
    switch (dia) { 
        case 1:
            printf("Lunes \n");
            break;
        case 2:
            printf("Martes \n");
            break;
        case 3:
            printf("Miercoles \n");
            break;
        case 4:
            printf("Jueves \n");
            break;
        case 5:
            printf("Viernes \n");
            break;
        case 6:
            printf("Sabado \n");
            break;
        case 7:
            printf("Domingo \n");
            break;
        default:
            printf("Dia invalido \n");
            break;
    }
*/

    return 0;
}

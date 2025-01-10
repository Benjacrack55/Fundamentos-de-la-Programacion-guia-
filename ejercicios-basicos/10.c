#include <stdio.h>

int main(){
    int dia, mes, anio, bisisesto;
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Anio: ");
    scanf("%d", &anio);

    bisisesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
    if (anio < 1) {
        printf("Anio invalido \n");
    } if (dia < 1 || dia > 31) {
        printf("Dia invalido \n");
    } else if (mes < 1 || mes > 12) {
        printf("Mes invalido \n");
    } else if ((mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia > 30)) {
        printf("Dia invalido para este mes y año \n");
    } else if (mes == 2 && dia == 29 && !bisisesto) {
        printf("Dia invalido para este mes y año (No es bisisesto) \n");
    } else {
        printf("La fecha %d/%d/%d es valida \n", dia, mes, anio);
    }

    return 0;
}

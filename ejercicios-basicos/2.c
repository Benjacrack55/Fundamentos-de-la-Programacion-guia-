#include <stdio.h>

int main() {
    int horas, valor_hora;

   printf("Horas trabajadas en el mes: ");
   scanf("%d", &horas);
   printf("Valor por hora de trabajo: ");
   scanf("%d", &valor_hora);

   printf("Sueldo: %d \n", horas * valor_hora);
   
    return 0;
}
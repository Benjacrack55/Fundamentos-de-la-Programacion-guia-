#include <stdio.h>

int main(){
    int base, altura;
  
    printf("Base: ");
    scanf("%d", &base);
    printf("Altura: ");
    scanf("%d", &altura);
  
    printf("Superficie: %d \n", (base * altura) / 2);
  
    return 0;
}

#include <stdio.h>

int main(){
    int n;
    printf("Numero: ");
    scanf("%d", &n);

    printf("%d \n", ( n * (n+1) ) / 2);
    
    return 0;
}

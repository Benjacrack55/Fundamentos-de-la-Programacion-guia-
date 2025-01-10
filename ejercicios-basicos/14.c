#include <stdio.h>

int main(){
    for (int i = 1; i <= 10; i++) {
        printf("%d: ", i);
        int j = 1;
        while (i * j <= 100) {
            printf("%d ", i*j);
            j++;
        } printf("\n");
    }
    
    return 0;
}

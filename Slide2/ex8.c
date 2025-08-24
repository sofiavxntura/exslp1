#include <stdio.h>

int main(){
    int n1, n2, intervalo;

    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);

    printf("Insira o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        for (intervalo = n2; intervalo <= n1; intervalo++) {
            printf("%d ",intervalo);
        }
        
    } else { // n2 > n1
        for (intervalo = n1; intervalo <= n2; intervalo++) {
            printf("%d ", intervalo);
        }
        

    }
    return 0;
}

// TERMINAL
// gcc -o ex8 ex8.c
// ./ex8

// leia números até que se digite 0.

#include <stdio.h>
int main(){
    int num;
    int soma = 0;
    printf("Insira um número: ");
    scanf("%d", &num);
    soma += num;

    while (num != 0) {
        printf("Insira um número: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("A soma é: %d\n",soma);
}

// TERMINAL
// gcc -o ex5 ex5.c
// ./ex5

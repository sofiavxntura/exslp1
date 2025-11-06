#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
}
 
void read(int *vetor, size_t n){
    for (int i = 0; i< n; i++){
        scanf("%d",&vetor[i]);
    }
}

void print(int *vetor) {
    printf("|%d|%d|%d|%d|%d|",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);

}

void exclude(int *vetor) {
    int I;
    printf("indice a deletar: ");
    scanf("%d",&I);
    vetor[I] = 0;

}

void troca(int *vetor, size_t n) {
    for (int i = 0; i < n; i++) {
        if (vetor[I] == 0) {
            vetor[I] = vetor[I+1];
            vetor[I+1] = 0;
        }
    }
}

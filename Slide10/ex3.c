#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe(struct Caixa* caixa) {
    printf("Lista encadeada: ");
    while (caixa != NULL) {
        printf("%d", caixa->valor);
        if (caixa->prox != NULL) {
            printf(" -> ");
        }
        caixa = caixa->prox;
    }
    printf("\n");
}

int main() {
    struct Caixa* c1 = (struct Caixa*)malloc(sizeof(struct Caixa));
    struct Caixa* c2 = (struct Caixa*)malloc(sizeof(struct Caixa));
    struct Caixa* c3 = (struct Caixa*)malloc(sizeof(struct Caixa));
    struct Caixa* c4 = (struct Caixa*)malloc(sizeof(struct Caixa));
    struct Caixa* c5 = (struct Caixa*)malloc(sizeof(struct Caixa));
    
    c1->valor = 1;
    c2->valor = 3;
    c3->valor = 9;
    c4->valor = 7;
    c5->valor = 5;

    c1->prox = c2;
    c2->prox = c3;
    c3->prox = c4;
    c4->prox = c5;
    c5->prox = NULL;
    
    struct Caixa* cabeca = c1;
    printf("Lista original: ");
    exibe(cabeca);

    struct Caixa *antes = cabeca;
    antes = antes->prox;
    struct Caixa *removida = antes->prox;
    antes->prox = removida->prox;
    removida->prox = NULL;

    printf("9 Removido: ");
    exibe(cabeca);

    
    removida->prox = cabeca;
    cabeca = removida;
    printf("9 adicionado: ");
    exibe(cabeca);


    struct Caixa *atual = cabeca;
    while (atual != NULL) {
      struct Caixa *temp = atual;
      atual = atual->prox;
      free(temp); //dá free 1 por vez
    }
    
    return 0;
}

#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe(struct Caixa *caixa) {
    struct Caixa *atual = caixa;
    while (atual != NULL) {
        printf("%d", atual->valor);    
        atual = atual->prox;

        if (atual != NULL) {
            printf(" -> ");
        }
    }
}


int main(){
    struct Caixa c1; c1.valor = 1;
    struct Caixa c2; c2.valor = 3;
    struct Caixa c3; c3.valor = 9;
    struct Caixa c4; c4.valor = 7;
    struct Caixa c5; c5.valor = 5;

    c1.prox = &c2;
    c2.prox = &c3;
    c3.prox = &c4;
    c4.prox = &c5;
    c5.prox = NULL;

    exibe(&c1);
    printf("\n");
    return 0;
    
}

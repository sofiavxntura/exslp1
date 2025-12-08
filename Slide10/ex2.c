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
    
    printf("Desde c1: \n");
    exibe(c1);
    
    printf("Desde c2: \n");
    exibe(c2);

    printf("Desde c3: \n");
    exibe(c3);

    printf("Desde c4: \n");
    exibe(c4);

    printf("Desde c5: \n");
    exibe(c5);
    
    free(c1); free(c2); free(c3); free(c4); free(c5);
    return 0;
}

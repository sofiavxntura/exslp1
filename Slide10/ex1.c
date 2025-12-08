#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

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
    c5->prox = NULL;  // fim. se fosse circular apontava pra c1
    
    printf("Lista encadeada: ");
    struct Caixa* atual = c1;
    while (atual != NULL) {
        printf("%d", atual->valor);
        if (atual->prox != NULL) {
            printf(" -> ");
        }
        atual = atual->prox;
    }
    printf("\n");
    free(c1); free(c2); free(c3); free(c4); free(c5);
    
    return 0;
}

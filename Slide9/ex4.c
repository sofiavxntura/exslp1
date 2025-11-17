#include <stdio.h>

struct Caixa {
  int valor;
  struct Caixa* prox;
};

void exibe(struct Caixa* x){
  struct Caixa* atual = x;
  while (atual != NULL) {
    printf("%d", atual->valor);
    if (atual->prox != NULL){
      printf(" -> ");
    }
    atual = atual->prox;
  }
  printf("\n");
}

void contem(struct Caixa* lista, int valor) {
    struct Caixa* atual = lista;
    while (atual != NULL) {
        if (atual->valor == valor) {
            printf("Sim\n");
            return;
        }
        atual = atual->prox;
    }
    printf("Nao\n"); 
}

int main(){
  struct Caixa c1, c2, c3, c4, c5;
  c1.valor = 1;
  c2.valor = 3;
  c3.valor = 9;
  c4.valor = 7;
  c5.valor = 5;
    
  c1.prox = &c2;
  c2.prox = &c3;
  c3.prox = &c4;
  c4.prox = &c5;
  c5.prox = NULL;

  printf("Lista: ");
  exibe(&c1);

  int num;
  printf("Que numero quer checar? ");
  scanf("%d", &num);
  printf("%d esta na lista? ", num); contem(&c1, num);
  

  return 0;
}

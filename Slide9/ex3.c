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

  exibe(&c1);

  struct Caixa* cabeca = &c1;
  cabeca->prox->prox = cabeca->prox->prox->prox; // c2.prox = &c4

  printf("9 removido: ");
  exibe(cabeca);

  c3.prox = cabeca;
  cabeca = &c3;

  printf("9 inserido: ");
  exibe(cabeca);
  return 0;
}

#include <stdio.h>

// Crie uma struct para guardar um ponto no espaço bi-dimensional com dois inteiros x e y.
struct Ponto {
    int x;
    int y;
};

// Crie uma função para preencher 1 ponto.
void preencherponto(struct Ponto *coord) {
    printf("X: "); scanf("%d",&coord->x);
    printf("Y: "); scanf("%d",&coord->y);
};

// Crie uma função para preencher um vetor de pontos.
void preenchervetor(struct Ponto vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("--- Ponto #%d --- \n", i+1);
        preencherponto(&vetor[i]);
    }
};

double distancia(struct Ponto mult) {
    return (mult.x*mult.x + mult.y*mult.y); // vai ficar ao quadrado pq nao tem sqrt
};

// Crie uma função que receba um vetor de pontos e retorne o ponto mais distante de (0,0).
struct Ponto maisdist(struct Ponto vetor[], int tamanho) {
    struct Ponto vetordist = vetor[0];
    double xydist = distancia(vetor[0]); //inicializando com o menor valor possivel

    for (int i = 0; i < tamanho; i++) {
        if (distancia(vetor[i]) > xydist) {
            vetordist = vetor[i];
            xydist = distancia(vetor[i]);
        }
    }
    return vetordist;
};

// Na main, crie um vetor com dez pontos.
int main() {
    struct Ponto vetor[10];
    preenchervetor(&vetor[10], 10);
    struct Ponto resultado = maisdist(&vetor[10], 10);
    printf("O ponto mais distante de (0,0) é (%d,%d)\n", resultado.x, resultado.y);
}

#include <stdio.h>

struct Posicao {
    int x;
    int y;
};

struct Personagem {
    int id;
    int pontos;
    struct Posicao coords;
};



void preencherposicao(struct Posicao *personagem) {
    printf("X: ");
    scanf("%d",&personagem->x);
    
    printf("Y: ");
    scanf("%d",&personagem->y);
};

void preencherpersonagem(struct Personagem *personagem){
    printf("Identidade: ");
    scanf("%d",&personagem->id);

    printf("Pontos: ");
    scanf("%d",&personagem->pontos);

    preencherposicao(&personagem->coords);

};

void vetores(struct Personagem vetor[]){
    for (int i = 0; i < 10; i++) { // 10 pq sao 10 personagens
        printf("--- Personagem #%d ---",i+1);
        preencherpersonagem(&vetor[i]);
    }
};

int main(){
    struct Personagem vetor[10];
    vetores(vetor);
}

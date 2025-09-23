#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
    
};

void preencheB (struct Personagem *P) {
    scanf("%d", &P->forca);
    scanf("%d",&P->energia);
    scanf("%d",&P->experiencia);
};

void main (void) {

    struct Personagem P1;
    preencheB(&P1);

    struct Personagem P2;
    preencheB(&P2);

    printf("(%d, %d, %d) vs (%d, %d, %d)\n",P1.forca, P1.energia,P1.experiencia,P2.forca,P2.energia,P2.experiencia);


}

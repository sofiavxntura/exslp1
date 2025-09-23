#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

int main(){

    struct Personagem P1;
    P1.forca = 10;
    P1.energia = 50;
    P1.experiencia = 30;

    struct Personagem P2;
    P2.forca = 18;
    P2.energia = 20;
    P2.experiencia = 25;

    printf("------ P1 ------\nForça: %d\nEnergia: %d\nExperiência: %d\n",P1.forca,P1.energia,P1.experiencia);
    printf("------ P2 ------\nForça: %d\nEnergia: %d\nExperiência: %d\n",P2.forca,P2.energia,P2.experiencia);

}

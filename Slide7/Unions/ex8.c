//adicionado nome e cor ->> printei no jacare

#include <stdio.h>

enum Tipos {Anfibio, Ave, Mamifero, Reptil};

struct Anfibio {
    int patas;
    float espessurapele;
    int cauda; //0 - nao, 1 - sim
};

struct Ave {
    float bico, autonomiavoo, frequenciacanto;
};

struct Mamifero {
    int dentes;
    float volcerebro, velocidadeterra;
};

struct Reptil {
    int venenoso;
    float autonomiaagua, espessuraovo;
};

union Propriedades {
    struct Anfibio anf;
    struct Ave ave;
    struct Mamifero mam;
    struct Reptil rep;

};

struct Animal {
    char nome[99];
    char cor[99];
    enum Tipos tipo;
    union Propriedades prop;
};

void nomecor(char a[], char b[]){
    int i = 0;
    while(b[i] != '\0') {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0'; //"finaliza a string"

};

int main(){
    struct Animal animal[4];
    // 4 exemplos

    // 1 - Galinha (numeros aleatorios)
    nomecor(animal[0].cor, "Branca");
    nomecor(animal[0].nome, "Galinha");
    animal[0].tipo = Ave;
    animal[0].prop.ave.bico = 1; //tem bico
    animal[0].prop.ave.autonomiavoo = 0;
    animal[0].prop.ave.frequenciacanto = 200;

    //2 - Sapo
    nomecor(animal[1].cor, "Verde");
    nomecor(animal[1].nome, "Sapo");
    animal[1].tipo = Anfibio;
    animal[1].prop.anf.patas = 4;
    animal[1].prop.anf.espessurapele = 20;
    animal[1].prop.anf.cauda = 0; //nao tem

    //3 - Vaca
    nomecor(animal[2].cor, "Malhada");
    nomecor(animal[2].nome, "Vaca");
    animal[2].tipo = Mamifero;
    animal[2].prop.mam.dentes = 32;
    animal[2].prop.mam.volcerebro = 20;
    animal[2].prop.mam.velocidadeterra = 15;

    //4 - Jacaré
    nomecor(animal[3].cor, "Verde");
    nomecor(animal[3].nome, "Jacaré");
    animal[3].tipo = Reptil;
    animal[3].prop.rep.venenoso = 2; //nao é
    animal[3].prop.rep.autonomiaagua = 10;
    animal[3].prop.rep.espessuraovo = 50;

    // Printando Jacaré
    printf("Tipo: Réptil\n");
    printf("Nome: %s\n",animal[3].nome);
    printf("Cor: %s\n",animal[3].cor);
    if (animal[3].prop.rep.venenoso == 0) {
        printf("Venenoso: Não\n");
    } else {
        printf("Venenoso: Sim\n");
    }
    printf("Autonomia na água: %f min\n", animal[3].prop.rep.autonomiaagua);
    printf("Espessura do ovo: %f mm\n", animal[3].prop.rep.espessuraovo);

}

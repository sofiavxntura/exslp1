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
    enum Tipos tipo;
    union Propriedades prop;
};

int main(){
    struct Animal animal[4];
    // 4 exemplos

    // 1 - Galinha (numeros aleatorios)
    animal[0].tipo = Ave;
    animal[0].prop.ave.bico = 1; //tem bico
    animal[0].prop.ave.autonomiavoo = 0;
    animal[0].prop.ave.frequenciacanto = 200;

    //2 - Sapo
    animal[1].tipo = Anfibio;
    animal[1].prop.anf.patas = 4;
    animal[1].prop.anf.espessurapele = 20;
    animal[1].prop.anf.cauda = 0; //nao tem

    //3 - Vaca
    animal[2].tipo = Mamifero;
    animal[2].prop.mam.dentes = 32;
    animal[2].prop.mam.volcerebro = 20;
    animal[2].prop.mam.velocidadeterra = 15;

    //4 - Jacaré
    animal[3].tipo = Reptil;
    animal[3].prop.rep.venenoso = 2; //nao é
    animal[3].prop.rep.autonomiaagua = 10;
    animal[3].prop.rep.espessuraovo = 50;

    // Printando Jacaré
    printf("Tipo: Réptil\n");
    if (animal[3].prop.rep.venenoso == 0) {
        printf("Venenoso: Não\n");
    } else {
        printf("Venenoso: Sim\n");
    }
    printf("Autonomia na água: %f min\n", animal[3].prop.rep.autonomiaagua);
    printf("Espessura do ovo: %f mm\n", animal[3].prop.rep.espessuraovo);

}

#include <stdio.h>

struct Atleta {
    char nome[99];
    int idade;
    char clube[99];
};

void propriedades(struct Atleta a) {
    printf("----- DADOS DO ATLETA -----\n");
    printf("Nome: %s\n",a.nome);
    printf("Idade: %d\n",a.idade);
    printf("Clube: %s\n",a.clube);
    printf("---------------\n");

};

int main (void) {
    struct Atleta Brait = {"Camila Brait",36,"Osasco"};
    struct Atleta Gabi = {"Gabriela Guimarães",31,"Conegliano"};
    struct Atleta Rosa = {"Rosamaria Montibeller",31,"Denso Airybees"};

    propriedades(Brait);
    propriedades(Gabi);
    propriedades(Rosa);
    return 0;
}

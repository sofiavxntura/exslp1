// a partir desse, vou fazer em uniao discriminada (tipos)
#include <stdio.h>
#include <string.h>

enum Moeda { //subtipo
    REAL, 
    DOLAR,
    EURO
};

union Valor {
    double real;
    double dolar;
    double euro;
};

struct Preco {
    union Valor valor;
    enum Moeda moeda;
};

void exibe(struct Preco p){
    printf("Preço: ");
    if (p.moeda == REAL) {
        printf("R$ %.2f\n",p.valor.real);
    } else {
        if (p.moeda == DOLAR) {
            printf("US$ %.2f\n",p.valor.dolar);
        } else {
            if (p.moeda == EURO) {
                printf("€ %.2f\n", p.valor.euro);
            }
        }
    }
};

void altera(struct Preco *p, enum Moeda cambio){
    if (p-> moeda == cambio) return; //moeda certa
    
    if (p->moeda == REAL) {
        if (cambio == DOLAR) {
            p->valor.dolar = (p->valor.real/5);
        } else if (cambio == EURO) {
            p->valor.euro = (p->valor.real/6);
        }
    } else if (p->moeda == DOLAR) {
        if (cambio == REAL) {
            p->valor.real = (p->valor.dolar*5);
        } else if (cambio == EURO) {
            p->valor.euro = (p->valor.dolar*1.2);
        }
    } else if (p->moeda == EURO) {
        if (cambio == REAL) {
            p->valor.real = (p->valor.euro*6);
        } else if (cambio == DOLAR) {
            p->valor.dolar = (p->valor.euro/1.2);
        }
    }
    p->moeda = cambio;
};

int main() {

    struct Preco novopreco;
    novopreco.valor.real = 60;
    novopreco.moeda = REAL;

    exibe(novopreco);

    altera(&novopreco, EURO);
    exibe(novopreco);

    altera(&novopreco, REAL);
    altera(&novopreco,DOLAR);
    exibe(novopreco);

}

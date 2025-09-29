#include <stdio.h>
#include <string.h>
// eu usaria while oi[i] != '\0', mas foi pedida a funcao tamanho

int tamanho(char *str){
    int count = 0;

    while (str[count] != '\0') { //espaço nulo
        count++;
    }
    return count;
};

void concatena(char *d, char *o1, char *o2){

    int counto1 = tamanho(o1);
    int counto2 = tamanho(o2);
    int i;
    int j; //deixei fora da iteracao pq eu uso i onde era so p ter j

    for (i = 0; i < counto1; i++) {
        d[i] = o1[i];
    }

    for (j = 0; j < counto2; j++) {
        d[i + j] = o2[j]; //i+j pq se nao ele vai apagar o i feito em cima
    }

    d[i+j] = '\0'; //ultimo caractere nulo, logo, acaba a string.
    printf("Concatenada: %s",d);

};


int main(){
    
    char destino[200];
    char origem1[100];
    char origem2[100];

    printf("String Origem 1: "); scanf("%99s",origem1);
    printf("String Origem 2: "); scanf("%99s",origem2);

    concatena(destino, origem1, origem2);

    return 0;
}

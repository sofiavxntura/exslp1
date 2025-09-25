#include <stdio.h>

struct Season {
    char nome[99];
    char mesinicio[99];
    char mesfim[99];
    int tempmedia;

};

void preenche(struct Season *s) { //ponteiro usa & quando nao eh string
    printf("Estação: \n");
    scanf("%s",s->nome);

    printf("Início em: \n");
    scanf("%s",s->mesinicio);

    printf("Fim em: \n");
    scanf("%s",s->mesfim);

    printf("Temperatura média: \n");
    scanf("%d",&s->tempmedia);

};

int main(void){

    struct Season dados;
    preenche(&dados);
    printf("--------------");
    printf("DADOS\n");
    printf("Estação: %s\n",dados.nome);
    printf("Início em: %s\n",dados.mesinicio);
    printf("Fim em: %s\n",dados.mesfim);
    printf("Temperatura Média: %d\n",dados.tempmedia);    
    return 0;

}

// crie uma union para representar um cidadão que pode ser identificado por CPF, RG ou Nome
// nao sabia se era pra rodar, entao fiz assim; se fosse só a union, era a primeira parte

#include <stdio.h>

union Identidade {
    int cpf;
    int rg;
    char nome[99];
};

int main(){
    union Identidade pessoa;
    int digito;

    printf("Insira a identificação desejada: (1) CPF, (2) RG, (3) Nome ");
    scanf("%d",&digito);

    if (digito == 1) {
        printf("CPF: ");
        scanf("%d",&pessoa.cpf);
        printf("Identificação Concluída! CPF: %d",pessoa.cpf);


    } else {
        if (digito == 2) {
            printf("RG: ");
            scanf("%d",&pessoa.rg);
            printf("Identificação Concluída! RG: %d",pessoa.rg);

        } else {
            if (digito == 3) {
                printf("Digite seu nome completo: ");
                scanf("%98[^\n]",pessoa.nome); //esse [^\n] lê espaços
                printf("Identificação Concluída! Nome: %s",pessoa.nome);

            } else {
                printf("Insira um número válido! (1, 2 ou 3)");
                return 1;
            }
        }
    }
    return 0;
}

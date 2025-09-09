#include <stdio.h>

float media(int *xs, int n){
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + *(xs+i);
    }

    return (float)soma/n; // converti o tipo pra dar divisao com decimal
}


void preenche(int *xs, int n){
    int numero = 0;
    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d",&numero);
        *(xs+i) = numero;
    }
}

int main(){

    int vec[100]; int qtd = 0;
    printf("Digite a quantidade de números: ");
    scanf("%d",&qtd);
    preenche(vec,qtd);
    printf("Média: %.2f\n",media(vec,qtd));


}

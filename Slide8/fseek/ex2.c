#include <stdio.h>

long tamanho(char *nome){
    FILE *arq = fopen(nome,"rb");
    if (arq == NULL) return -1;


    long tamanho = 0;
    int letra;

    while ((letra = fgetc(arq)) != EOF) { //end of file
        tamanho++;
    }

    fclose(arq);
    return tamanho;

}

int main(){
    char nome[100];
    printf("Nome do arquivo: ");
    scanf("%99s",nome);

    long size = tamanho(nome);

    if (size == -1) {
        printf("ERRO");
    } else {
        printf("====== Arquivo %s ======\n", nome);
        printf("Tamanho: %ld bytes",size);
    }
    return 0;
}

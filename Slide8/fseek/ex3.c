#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq = fopen("arquivo.txt", "r+");
    if (arq == NULL) {
        printf("ERRO");
        return 1;
    }
    
    fseek(arq, 0, SEEK_END);
    long tamanho = ftell(arq);
    long meio = tamanho / 2;

    //segunda metade
    fseek(arq, meio, SEEK_SET);
    char *resto = malloc(tamanho - meio + 1);
    fread(resto, 1, tamanho - meio, arq);
    resto[tamanho - meio] = '\0';

    fseek(arq, meio, SEEK_SET);
    fputs("|meio|", arq);
    fputs(resto, arq);

    free(resto); //tirar a memoria alocada
    fclose(arq);
    return 0;
}

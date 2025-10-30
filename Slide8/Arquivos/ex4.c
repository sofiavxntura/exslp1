#include <stdio.h>
#include <string.h>



int main(){
    char texto[10][26]; //10 strings
    FILE *arq4 = fopen ("ex4.txt","w");

    if (arq4 == NULL) {
        printf("ERRO");
        return 1;
    }

    printf("Digite 10 strings (max 25 char): \n"); //leitura
    for (int i = 0; i < 10; i++) {
        scanf("%25s",texto[i]);

    }

    for (int i = 0; i < 10; i++){
        int tamanho = strlen(texto[i]); //ve o tamanho de cada uma das 10 strings

        for (int j = 0; j < tamanho; j++){
            fputc(texto[i][j], arq4); //escreve caractere por caractere
        }

        fputc('\n',arq4);

    }

    fclose(arq4);
    printf("Strings escritas.\n");

    return 0;
}

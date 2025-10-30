#include <stdio.h>
#include <string.h>

void escreva_string(FILE *f, char *str){
    for (int i = 0; str[i] != '\0'; i++){ //enqt nao for caractere nulo
        fputc(str[i],f);
    } 
}
int main(){
    char texto[10][26]; //10 strings
    FILE *arq4 = fopen("ex4.txt","w");

    if (arq4 == NULL) {
        printf("ERRO");
        return 1;
    }

    printf("Digite 10 strings (max 25 char): \n"); //leitura
    for (int i = 0; i < 10; i++) {
        scanf("%25s",texto[i]);

    }

    for (int i = 0; i < 10; i++){

        escreva_string(arq4,texto[i]);
        fputc('\n',arq4);

    }

    fclose(arq4);
    printf("Strings escritas.\n");

    return 0;
}

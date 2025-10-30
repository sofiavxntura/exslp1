//modifique o ex1 com void escreva_string (FILE* f, char* str)

#include <stdio.h>
#include <string.h>

void escreva_string(FILE *f, char *str) {
    int tamanho = strlen(str);
    
    for (int i = 0; i < tamanho; i++){
        fputc(str[i], f);
    }
}

int main(){
    char texto[26];
    FILE *arq1 = fopen("arquivo1.txt","w");

    printf("Insira uma string (máx 25 caracteres): ");
    scanf("%25s",texto);
    int tamanho = strlen(texto);

    escreva_string(arq1,texto);
    fclose(arq1);
    printf("Tamanho da string: %d caracteres\n",tamanho);
    
    return 0;

}

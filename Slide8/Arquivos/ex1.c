#include <stdio.h>
#include <string.h>

int main(){
    char texto[26];
    FILE *arq1 = fopen("arquivo1.txt","w"); //w = write

    printf("Insira uma string (máx 25 caracteres): ");
    scanf("%25s",texto);

    int tamanho = strlen(texto);
    for (int i = 0; i < tamanho; i++){
        fputc(texto[i],arq1);
    }
    fclose(arq1);

    printf("Tamanho da string: %d caracteres",tamanho);
    
    return 0; 
}

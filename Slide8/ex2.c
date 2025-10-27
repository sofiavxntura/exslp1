// Leia o arquivo do exercício 1, caractere a caractere, para uma string (máximo de 25 caracteres).
// Exiba na tela a string lida.
// obs: o arq1 já tem a string armazenada do ex1, por isso ele consegue ler (mas só aparece executando)

#include <stdio.h>
#include <string.h>

int main() {
    char texto[26];
    FILE *arq1 = fopen("arquivo1.txt", "r"); // r = read
    
    if (arq1 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1; //sair do cod
    }
    
    int i = 0;
    int letra;
    
    while (i < 25 && (letra = fgetc(arq1)) != EOF) {//eof = end of file
        texto[i] = letra;
        i++;
    }
    
    texto[i] = '\0'; //fim da string
    fclose(arq1);
    
    printf("String do arq1: %s\n", texto);
    
    return 0;
}

//implemente a funcao palavras
// recebe uma string, retorna a qtd de palavras
// lembra de usar \0 (espaco nulo)

#include <stdio.h>

int palavras(char *str){
    int contador = 0;

    for (int i = 0; str[i] != '\0'; i++) { //se vier um espaco nulo ja corta
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' ')) { //se o caractere nao for um espaco e se for o primeiro carac ou se o carac anterior for um espaco
            contador++;
        }
    } 
    return contador;
}; 

int main(){
    char frase[99];
    printf("Insira uma string: ");
    scanf("%99[^\n]",&frase); //[^\n] lê strings com espaços

    printf("Sua string tem %d palavras.",palavras(frase));

    return 0;

}




#include <stdio.h>
#include <string.h>

int tamanho(char *str){
    int count = 0;

    while (str[count] != '\0') { //operador nulo
        count++;
    }
    return count;
}



int main(){
    char palavra[100];

    printf("Insira sua string: ");
    scanf("%99s",palavra); //limitar a 99
    int size = tamanho(palavra);
    printf("Tamanho da string '%s': %d\n",palavra,size);


    return 0;
}

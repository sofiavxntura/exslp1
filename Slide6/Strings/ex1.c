
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
    char var[100];

    printf("Insira sua string: ");
    scanf("%99s",var); //limitar a 99
    int size = tamanho(var);
    printf("Tamanho da string '%s': %d\n",var,size);


    return 0;
}

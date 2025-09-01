#include <stdio.h>
#include <stdlib.h>

int main() {
    int var = 15;
    int *ptr;
    
    ptr = &var;

    printf("conteúdo da var = %d\n", var);
    printf("endereço da var = %p\n", &var); //"%p" serve para achar o endereço
    printf("conteúdo apontado por ptr = %d\n", *ptr);
    printf("endereço apontado por ptr = %p\n", ptr);
    printf("endereço do ptr = %p\n", &ptr);


    *ptr = 73; //mudo o valor apontado por ptr -> mudança "involuntária" de "var"

    printf("\n------------------\n");
    printf("conteúdo da var = %d\n", var);
    printf("endereço da var = %p\n", &var); //"%p" serve para achar o endereço
    printf("conteúdo apontado por ptr = %d\n", *ptr);
    printf("endereço apontado por ptr = %p\n", ptr);
    printf("endereço do ptr = %p\n", &ptr);
    printf("Fim");

    return 0;


}

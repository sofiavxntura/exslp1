// CRIAR UM PROGRAMA E VER O MAIOR VALOR ENTRE DOIS
#include <stdio.h>
int main(){
    int a, b;

    printf("Insira o primeiro número. ");
    scanf("%d",&a);
    printf("Insira o segundo número. ");
    scanf("%d",&b);

    if (a > b){
        printf("O maior número é %d\n",a);
    } else{
        printf("O maior número é %d\n",b);
    }

}

//TERMINAL (COMPILANDO)
// gcc -o ex2 ex2.c
// ./ex2


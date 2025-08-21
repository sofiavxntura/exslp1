//bom negócio se não passar de 1000 reais
#include <stdio.h>
int main(){
    int dolar;
    printf("Insira o valor do celular em dólares: ");
    scanf("%d", &dolar);

    int real = (dolar*3.17);

    if (real > 1000) {
        printf("MAU NEGÓCIO: %d reais\n",real);
    } else {
        printf("BOM NEGÓCIO: %d reais\n",real);
    }
}

//TERMINAL
//gcc -o ex2 ex2.c
// ./ex2

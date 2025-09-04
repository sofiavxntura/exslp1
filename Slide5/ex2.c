// Uma conta é representada por um inteiro que guarda o saldo total: (int minha_conta)
// Uma compra na internet é efetuada por uma chamada compra(conta,valor). 
// A função recebe um ponteiro para uma conta e um valor a ser debitado:
// void compra (int* conta, int valor) {}
// Um casal tem duas contas e quer usar a conta com maior saldo para fazer uma compra de 500 reais. 
// Faça um programa que leia o saldo das duas contas e efetue a compra corretamente. 
// Ao final, o programa deve exibir os saldos das duas contas.

#include <stdio.h>
void compra(int *conta, int valor){
    *conta = (*conta - valor); // conta é um ponteiro que vai puxar uma das duas contas individuais
}
int main(){
    int mc1, mc2;
    printf("digite o valor da conta 1 e o valor da conta 2: ");
    scanf("%d %d",&mc1,&mc2);
    printf("Conta 1 = %d\nConta 2 = %d\n",mc1,mc2);

    if (mc1 < mc2) {
        compra(&mc2,500); // ponteiro puxa de mc2
    } else {
        compra(&mc1,500); //ponteiro puxa de mc1
    }

    printf("\nApós a compra, temos:\nConta 1 = %d\nConta 2 = %d\n",mc1,mc2);
    return 0;
}

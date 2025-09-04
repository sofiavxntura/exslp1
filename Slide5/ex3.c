// EX2 - Adicional
// Agora, o casal tem uma lista de compras a efetuar:
// int compras[] = { 100, 50, 80, 30, 20 };
// Faça um programa que leia o saldo das duas contas e efetue as compras corretamente, 
// sempre usando a conta com o maior saldo. A cada compra, o programa deve exibir os saldos das duas contas.

#include <stdio.h>
void compra(int *conta, int valor){
    *conta = (*conta - valor); // conta é um ponteiro que vai puxar uma das duas contas individuais
}
int main(){
    int compras[] = {100, 50, 80, 30, 20};
    int mc1, mc2;
    printf("digite o valor da conta 1 e o valor da conta 2: ");
    scanf("%d %d",&mc1,&mc2);
    printf("Conta 1 = %d\nConta 2 = %d\n",mc1,mc2);

    for (int i = 0; i <= 4; i++){
        if (mc1 < mc2) {
        compra(&mc2,compras[i]); // ponteiro puxa de mc2
    } else {
        compra(&mc1,compras[i]); //ponteiro puxa de mc1
    }

    printf("\nApós a compra %d, temos:\nConta 1 = %d\nConta 2 = %d\n",i+1,mc1,mc2);
    }
    
    return 0;
}

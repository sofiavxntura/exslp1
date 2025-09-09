#include <stdio.h>

int main(){
    int vet[5]; int num = 0;
    int I = 0; // entre 0 e 4, inclusive

    for (int i = 0; i < 5; i++) {
        printf("Insira um número: ");
        scanf("%d", &num);
        vet[i] = num;
    }

    for (int i = 0; i < 5; i++) {
        printf("| %d |",vet[i]);
    }
    printf("\n---------\n");

    printf("Insira o valor de I (0 a 4): ");
    scanf("%d",&I);
    vet[I] = 0;
    
    for (int k = 0; k < 4; k++) { // nao quero 0, nem 4
        if (vet[k] == 0) {
            vet[k] = vet[k+1];
            vet[k+1] = 0;
        }

    }

    printf("---------\n");

    for (int i = 0; i < 5; i++) {
        printf("| %d |",vet[i]);
    }
    printf("\n");

}

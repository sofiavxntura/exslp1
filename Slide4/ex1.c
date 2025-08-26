#include <stdio.h>

int eh_primo(int k){
    if (k<=1) {
        return 0;
    }
    for (int i = 2; i < k; i++) {
        if ((k%i) == 0){
            return 0;
        }
    }
    return 1; //não conseguiu dividir com nada.
}

int main(){
    int num;
    printf("Insira um número: ");
    scanf("%d", &num);

    int resultado = eh_primo(num);
    if (resultado == 1){
        printf("%d é primo.\n",num);
    }
    else {
        printf("%d não é primo.\n",num);
    }
    return 0;
}

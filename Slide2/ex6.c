// somatório dos n primeiros quadrados

#include <stdio.h>
int main (){
    int somatorio, n, aux;
    printf("Insira o número final do somatório. ");
    scanf("%d",&n);
    aux = n; // só pro print final
  
    while (n > 0) {
        somatorio += (n*n);
        n = n-1;
    }
    printf("O somatório dos %d primeiros quadrados é %d\n", aux, somatorio);
}

//TERMINAL
// gcc -o ex5 ex5.c
// ./ex5

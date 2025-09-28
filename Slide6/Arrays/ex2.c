#include <stdio.h>
#define L 100
#define C 100
// valor constante de l e c que estou usando é l = 2 e c = 3, chamo no main
// nao imprimo o array pq nao foi pedido

float media(int arr[L][C], int l, int c) {
    int soma = 0;
    int total_elementos = l * c;
    
    for(int i = 0; i < l; i++) { //soma de td
        for(int j = 0; j < c; j++) {
            soma += arr[i][j];
        }
    }
    
    return (float)soma / total_elementos; //media c float
}

void preenche(int arr[L][C], int l, int c) {
    printf("Digite %d numeros inteiros:\n", l * c);
    
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}


int main() {
    int matriz[L][C];
    int linhas = 2;
    int colunas = 3; // valor constante predefinido
    
    preenche(matriz, linhas, colunas);
      
    // calcula e mostra a média
    float resultado = media(matriz, linhas, colunas);
    printf("\nMedia dos elementos: %.2f\n", resultado);
    
    return 0;
}

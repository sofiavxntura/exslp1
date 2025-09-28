#include <stdio.h>
#define L 100 // tamanho max da matriz 100x100
#define C 100

float determinante(int arr[L][C], int lc) {
    if (lc == 1) return arr[0][0]; //1x1, ekemento unico
    if (lc == 2) return arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0]; //a*d - b*c

    float det = 0;
    int matriz2[L][C]; //armazena as submatrizes da matriz principal p fzr o det
    
    for (int i = 0; i < lc; i++) { //primeira linha da matriz principal
        for (int j = 1; j < lc; j++) { //percorre as linhas, menos a 1a
            int coluna2 = 0;

            for (int k = 0; k < lc; k++) { // percorre as colunas
                if (k != i) { 
                    matriz2[j-1][coluna2] = arr[j][k];
                    coluna2++;
                }
            }
        }
        int sinal; 
        if (i%2 == 0) { //par, sinal pos, impar, neg
            sinal = 1;
        } else {
            sinal = -1;
        }
        det+= arr[0][i] * sinal * determinante(matriz2,lc-1);
    }
    return det;

}

int main(){
    int matriz[L][C] = { //da pra fazer com qq tamanho de matriz, so alterar ela no codigo
        {9, 2, 3},
        {1, 0, 5}, 
        {0, 5, 7}
    };

    float det = determinante(matriz,3); //-> matriz 3x3
    printf("\nDeterminante da Matriz: %.2f",det); //.2f -> 2 casas dec

}

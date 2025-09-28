//crie uma função preenche que receba um array bidimensional (arr)
// de inteiros com uma dimensão fixa (LxC), e preencha o array com
//l*c números lidos do teclado: void preenche (int arr[L][C], int l, int c)

#include <stdio.h>
#define L 100 //max linhas
#define C 100 //max colunas

void preenche(int arr[L][C], int l, int c) {
    printf("Digite %d numeros inteiros:\n", l * c); // diz qnts numeros precisa
    
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void imprime(int arr[L][C], int l, int c) { //parte q imprime e formata
    printf("\nArray preenchido:\n");
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]); //\t = TAB
        }
        printf("\n");
    }
}

int main() { //parte q vai rodar
    int matriz[L][C];

    int linhas;
    int colunas;

    printf("Insira o número de linhas: ");
    scanf("%d",&linhas);

    printf("Insira o número de colunas: ");
    scanf("%d",&colunas);
    
    preenche(matriz, linhas, colunas);
    imprime(matriz, linhas, colunas);
    
    return 0;
}

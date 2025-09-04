// Crie uma função troca que receba dois ponteiros para inteiros 
// p1 e p2 e troque os conteúdos por eles apontados:

#include <stdio.h>

void troca(int *p1, int *p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;  
}

int main(){
    int a, b;
    printf("Insira os valores de a e de b: ");
    scanf("%d %d", &a, &b);
    printf("a = %d\nb = %d\n",a,b);

    troca(&a,&b);
    printf("\n---- Troca Efetuada! ----\n\na = %d\nb = %d\n",a,b);

    return 0;

}

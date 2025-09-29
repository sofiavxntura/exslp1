#include <stdio.h>

void medias(int notas[12]) {
    int bimestre[6];
    int i;

    for (i = 0; i < 6; i++) {
        bimestre[i] = (notas[i*2] + notas[i*2 + 1])/2; //-> i = 0; (v[0] + v[1]) / 2
    }
    for (i = 0; i < 6; i++) {
        printf("%d ", bimestre[i]);
    }
    printf("\n");
};


int main(){
    int mensais[12];

    printf("Insira 12 notas: "); 
    for (int i = 0; i < 12; i++) {
        scanf("%d",&mensais[i]);
    }
    
    medias(mensais);
    return 0;

}

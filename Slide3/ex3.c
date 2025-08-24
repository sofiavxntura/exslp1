#include <stdio.h>

int main() {
    char temps[50];
    int i, soma = 0, acima = 0, temp;
    
    printf("Digite 50 temperaturas (de -100 a 100): \n");
    for (i = 0; i < 50; i++) { //i++ -> i = i+1
        printf("%d: ", i + 1);
        scanf("%d", &temp);
        
        temps[i] = temp;
        soma += temp;
    }
    
    double media = (double)soma / 50.0;
    
    for (int i = 0; i < 50; i++) {
        if (temps[i] > media) {
            acima = acima + 1;
        }
    }
    
    printf("Media: %.2f \n", media);
    printf("Acima da media: %d\n", acima);
    return 0;
}

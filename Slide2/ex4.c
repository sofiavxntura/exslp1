// MPH

#include <stdio.h>
int main(){
    int mph;
    printf("Insira sua velocidade em milhas: ");
    scanf("%d", &mph);

    int kph = (mph*1.6);

    if (kph >= 80 && kph <= 100) {
        printf("MANTENHA -- (%d KM/H)\n",kph);
    } else { if (kph < 80) {
        printf("ACELERE -- (%d KM/H)\n",kph);
    } else {
        printf("DESACELERE -- (%d KM/H)\n",kph);
    }
    }
}

// TERMINAL
// gcc -o ex4 ex4.c
// ./ex4

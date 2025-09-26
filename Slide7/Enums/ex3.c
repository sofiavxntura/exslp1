#include <stdio.h>

typedef enum {
    false, // 0
    true, // 1
} boolean;

int main(){
    boolean boole = true;

    if (boole) {
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }
}

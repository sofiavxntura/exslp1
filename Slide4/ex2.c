#include <stdio.h>

int todos_os_primos(int k){
    if (k<=1) {
        return 0;
    }
    for (int i = 2; i < k; i++) {
        if ((k%i) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    printf("Insira um número: ");
    scanf("%d", &num);

    for (int g = 1; g < num;g++) {
        if (todos_os_primos(g)){
            printf("%d, ",g);
        }
    }
    printf("\n");
    return 0;
}

int eh_primo(int p) {
    if (p <= 1) {
        return 0;
    }
    for (int i = 2; i < p; i++) {
        if ((p % i) == 0) {
            return 0;
        }
    }
    return 1; // não conseguiu dividir com nada
}

int todos_os_primos(int k) {
    if (k <= 1) {
        return 0;
    }
    
    printf("Números primos até %d: ", k);
    for (int i = 2; i <= k; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 1;
}

int main() {
    int num;
    printf("Insira um número: ");
    scanf("%d", &num);

    todos_os_primos(num);

    return 0;
}
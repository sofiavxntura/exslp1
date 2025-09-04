// Leia dois inteiros a e b.
// Exiba os valores de a e b.
// Crie um ponteiro p para a variável com o maior valor.
// Através de p subtraia 50 da variável com o maior valor.
// Exiba os valores de a e b novamente.


#include <stdio.h>

int main(){
    int a, b;
    printf("Insira um valor para a e outro para b: ");
    scanf("%d %d",&a,&b);
    printf("a = %d, b = %d\n",a,b);

    if (a < b){
        int *ptr = &b;
        *ptr = (*ptr - 50);
    }
    else {
        int *ptr = &b;
        *ptr = (*ptr - 50);
    }
    printf("\n----- MUDANÇA -----\n");
    printf("a = %d, b = %d\n",a,b);
    return 0;
}

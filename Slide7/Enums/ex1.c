#include <stdio.h>

enum Dia {
    Seg, // 0 
    Ter, // 1...
    Qua,
    Qui,
    Sex,
    Sab,
    Dom,
};

char* nome(enum Dia x){
    char* semana[7] = {"Segunda","Terça","Quarta","Quinta","Sexta","Sábado","Domingo"};
    return semana[x];
};

int main(){
    printf("%s\n",nome(Qui));

}

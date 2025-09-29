#include <stdio.h>

int tamanho(char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
};

int substring(char *s1, char *s2) {
    int counts1 = tamanho(s1);
    int counts2 = tamanho(s2);
    int i;
    int j;

    if (counts2 == 0) return 1; // fazer na base do true/false -> vazia é smp substring
    if (counts2 > counts1) return 0;

    for (i = 0; i <= counts1-counts2; i++) {
        for (j = 0; j < counts2; j++) {
            if (s1[i+j] != s2[j]) { //otimizado p parar msm antes de completar td
                break;
            }
        }
        if (j == counts2) return 1; //percorre a string td
    }
    return 0;
};

int main() {
    char string1[100];
    char string2[100];

    printf("String 1: "); scanf("%99s",string1);
    printf("String 2: "); scanf("%99s",string2);

    if (substring(string1,string2)) {
        printf("'%s' é substring de '%s'.",string2,string1);
    } else {
        printf("'%s' não é substring de '%s'.",string2,string1);
    }
    return 0;
}

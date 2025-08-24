#include <stdio.h>
int main(){

    char time[4], maiortime[4], menortime[4]; // em [], usar um número a mais que o tamanho desejado
    int pts, vit, der, emp, maiorpts, menorpts;

    printf("--- Insira os dados do time 1 ---\n");
    printf("Insira o seu time (3 letras): ");
    
    
    scanf("%3s", time); //%s -> indica string; "3" -> limita a string a 3 caracteres

    printf("Insira o numero de vitorias: ");
    scanf("%d", &vit);
    printf("Insira o numero de empates: ");
    scanf("%d", &emp);
    printf("Insira o numero de derrotas: ");
    scanf("%d", &der);
    
    //calcular o primeiro
    pts = (vit * 3 + emp);
    maiorpts = pts;
    menorpts = pts;

    for (int i = 0; i < 4; i++) {
        maiortime[i] = time[i];
        menortime[i] = time[i];
    }

    // calcular o resto (aqui que se muda a qtd total de times)
    for (int i = 1; i < 3; i++) {
        printf("\n--- Insira os dados do time %d ---\n", i + 1);
        printf("Insira o seu time (3 letras): ");
        scanf("%3s", time);

        printf("Insira o numero de vitorias: ");
        scanf("%d", &vit);
        printf("Insira o numero de empates: ");
        scanf("%d", &emp);
        printf("Insira o numero de derrotas: ");
        scanf("%d", &der);

        pts = (vit * 3 + emp);

        if (pts > maiorpts) {
            maiorpts = pts;
            for (int j = 0; j < 4; j++) {
                maiortime[j] = time[j];
            }
        } 
        
        if (pts < menorpts) {
            menorpts = pts;
            for (int j = 0; j < 4; j++) {
                menortime[j] = time[j];
            }
        }
    }

    printf("\nTime com menos pontos: %s (%d PONTOS)\n", menortime, menorpts);
    printf("Time com mais pontos: %s (%d PONTOS)\n", maiortime, maiorpts);

    return 0;
}

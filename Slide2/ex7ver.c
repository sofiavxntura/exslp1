#include <stdio.h>
int main(){

    char time[4], maiortime[4], menortime[4]; // em [], usar um número a mais que o tamanho desejado
    int pts, vit, der, emp, maiorpts, menorpts;

    printf("--- Insira os dados do time 1 ---\n");
    printf("Insira o seu time (3 letras): ");
    
    
    scanf("%3s", time); 

    printf("Insira o numero de vitorias: ");
    scanf("%d", &vit);
    printf("Insira o numero de empates: ");
    scanf("%d", &emp);
    printf("Insira o numero de derrotas: ");
    scanf("%d", &der);
    
    // Calculate and set the initial points
    pts = (vit * 3 + emp);
    maiorpts = pts;
    menorpts = pts;

    // Manually copy the first team's name as the initial values
    for (int i = 0; i < 4; i++) {
        maiortime[i] = time[i];
        menortime[i] = time[i];
    }

    // Loop for the remaining 19 teams
    for (int i = 1; i < 20; i++) {
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

        // Check if the current team has more points
        if (pts > maiorpts) {
            maiorpts = pts;
            // Manually copy the new highest team name
            for (int j = 0; j < 4; j++) {
                maiortime[j] = time[j];
            }
        } 
        
        // Check if the current team has fewer points
        if (pts < menorpts) {
            menorpts = pts;
            // Manually copy the new lowest team name
            for (int j = 0; j < 4; j++) {
                menortime[j] = time[j];
            }
        }
    }

    printf("\nTime com menos pontos: %s (%d PONTOS)\n", menortime, menorpts);
    printf("Time com mais pontos: %s (%d PONTOS)\n", maiortime, maiorpts);

    return 0;
}

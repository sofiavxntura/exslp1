#include <stdio.h>
int main(){
    char time[3], maiortime[3], menortime[3];
    int pts, vit, der, emp, n = 20, maiorpts, menorpts;

    while (n > 0){
        printf("Insira o seu time (3 letras): ");
        scanf("%c", &time);
        print("Insira o número de vitórias: ");
        scanf("%d", &vit);
        print("Insira o número de empates: ");
        scanf("%d", &emp);
        print("Insira o número de derrotas: ");
        scanf("%d", &der);

        pts = (vit*3 + emp);

        if (pts > maiorpts) {
            pts == maiorpts;
            time == maiortime;
        } else {
            if (pts < menorpts) {
                pts == menorpts;
                time == menortime;
            }
        }
        n = n-1;
    }
    printf("Time com menos pontos: %c (%d PONTOS)\n",menortime,menorpts);
    printf("Time com mais pontos: %c (%d PONTOS)\n",maiorpts,maiorpts);

}


#include <stdio.h>
int main(){
    char time[4], maiortime[4], menortime[4];
    int pts, vit, der, emp, maiorpts, menorpts;

    printf("Insira o seu time (4 letras): ");
    scanf("%3s", &time);
        
    printf("Insira o número de vitórias: ");
    scanf("%d", &vit);

    printf("Insira o número de empates: ");
    scanf("%d", &emp);

    printf("Insira o número de derrotas: ");
    scanf("%d", &der);

    pts = (vit*3 + emp);
    maiorpts = pts;
    menorpts = pts;

    for (int i = 1; i < 20;i++){
        if (pts > maiorpts) {
            pts = maiorpts;
            time[4] = maiortime[4];
        } else {
            if (pts < menorpts) {
                pts = menorpts;
                time[4] = menortime[4];
            }
        }
    }
    printf("Time com menos pontos: %s (%d PONTOS)\n",menortime[4],menorpts);
    printf("Time com mais pontos: %s (%d PONTOS)\n",maiortime[4],maiorpts);

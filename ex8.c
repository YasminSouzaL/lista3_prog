/*Um astrˆonomo est´a estudando quatro planetas do Sistema Solar. E como necessita fazer alguns
c´alculos na sua pesquisa te passou um arquivo contendo, o nome do planeta, sua distˆancia do
Sol, em milh˜oes de Km, sua temperatura m´ınima e temperatura m´axima. Esse arquivo est´a no
seguinte formato:
Merc´urio 57.8 -180 427
Venus 108 -150.5 485
Marte 228 -142 17
J´upiter 778 -240 12
Crie uma estrutura Planeta para armazenar os dados e fa¸ca a leitura desse arquivo chamado
“planetas.txt”
criar 2 funçoes:
1. função que gravar dados no arquivo
2. função que leia os dados do arquivo e imprima na tela
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    float distancia;
    float temp_min;
    float temp_max;
} Planeta;

void gravarDados(Planeta *p, int n) {
    FILE *arq;
    int i;

    arq = fopen("planetas.txt", "w");

    for (i = 0; i < n; i++) {
        fprintf(arq, "%s %.2f %.2f %.2f\n", p[i].nome, p[i].distancia, p[i].temp_min, p[i].temp_max);
    }

    fclose(arq);
}

void lerDados(Planeta *p, int n) {
    FILE *arq;
    int i;

    arq = fopen("planetas.txt", "r");

    for (i = 0; i < n; i++) {
        fscanf(arq, "%s %f %f %f", p[i].nome, &p[i].distancia, &p[i].temp_min, &p[i].temp_max);
    }

    fclose(arq);
}

int main() {
    Planeta *p;
    int n, i;

    printf("Digite o numero de planetas: ");
    scanf("%d", &n);

    p = (Planeta *) malloc(n * sizeof(Planeta));

    for (i = 0; i < n; i++) {
        printf("Digite o nome do planeta: ");
        scanf("%s", p[i].nome);
        printf("Digite a distancia do planeta: ");
        scanf("%f", &p[i].distancia);
        printf("Digite a temperatura minima do planeta: ");
        scanf("%f", &p[i].temp_min);
        printf("Digite a temperatura maxima do planeta: ");
        scanf("%f", &p[i].temp_max);
    }

    gravarDados(p, n);

    lerDados(p, n);

    for (i = 0; i < n; i++) {
        printf("%s %.2f %.2f %.2f\n", p[i].nome, p[i].distancia, p[i].temp_min, p[i].temp_max);
    }

    free(p);

    return 0;
}
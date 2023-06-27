/*Um astrˆonomo est´a estudando quatro planetas do Sistema Solar. E como necessita fazer alguns
c´alculos na sua pesquisa te passou um arquivo contendo, o nome do planeta, sua distˆancia do
Sol, em milh˜oes de Km, sua temperatura m´ınima e temperatura m´axima. Esse arquivo est´a no
seguinte formato:
Merc´urio 57.8 -180 427
Venus 108 -150.5 485
Marte 228 -142 17
J´upiter 778 -240 12
Crie uma estrutura Planeta para armazenar os dados e fa¸ca a leitura desse arquivo chamado
“planetas.txt”*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[20];
    float distancia;
    float temp_min;
    float temp_max;
} Planeta;

int main() {
    FILE *arq;
    Planeta *planetas;
    int i;

    arq = fopen("planetas.txt", "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    planetas = (Planeta *) malloc(4 * sizeof(Planeta));

    for (i = 0; i < 4; i++) {
        fscanf(arq, "%s %f %f %f", planetas[i].nome, &planetas[i].distancia, &planetas[i].temp_min, &planetas[i].temp_max);
    }

    for (i = 0; i < 4; i++) {
        printf("Planeta: %s\n", planetas[i].nome);
        printf("Distancia: %.2f\n", planetas[i].distancia);
        printf("Temperatura minima: %.2f\n", planetas[i].temp_min);
        printf("Temperatura maxima: %.2f\n", planetas[i].temp_max);
        printf("\n");
    }

    fclose(arq);
    free(planetas);

    return 0;
}
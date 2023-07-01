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

void gravar_dados() {
    Planeta p;
    FILE *arq;
    arq = fopen("planetas.txt", "a");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    printf("Digite o nome do planeta: ");
    scanf("%s", p.nome);
    printf("Digite a distancia do planeta: ");
    scanf("%f", &p.distancia);
    printf("Digite a temperatura minima do planeta: ");
    scanf("%f", &p.temp_min);
    printf("Digite a temperatura maxima do planeta: ");
    scanf("%f", &p.temp_max);
    fprintf(arq, "%s %f %f %f\n", p.nome, p.distancia, p.temp_min, p.temp_max);
    fclose(arq);
}

int main() {
    Planeta p;
    FILE *arq;
    gravar_dados();
    arq = fopen("planetas.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    while (fscanf(arq, "%s %f %f %f", p.nome, &p.distancia, &p.temp_min, &p.temp_max) == 4) {
        printf("%s %f %f %f\n", p.nome, p.distancia, p.temp_min, p.temp_max);
    }
    fclose(arq);
    return 0;
}

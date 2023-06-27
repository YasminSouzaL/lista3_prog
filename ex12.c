/* Seja um sistema destinado a controlar despesas e dados de um condom´ınio de apartamentos. Os
dados de cada apartamento s˜ao armazenados em um vetor de estruturas. Para cada apartamento
tem-se os seguintes dados:
 nome (do respons´avel)
 n´umero (do apartamento)
 ´area (em m2
)
 n´umero de moradores
 valor (a ser pago no mˆes)

(a) Escrever a defini¸c˜ao da estrutura produto.
(b) Declarar um vetor de estruturas, suponde que o condom´ınio tem 15 apartamentos.
(c) Escrever uma fun¸c˜ao que retorne a ´area total do condom´ınio.
(d) Escrever uma fun¸c˜ao que calcule o total arrecadado do condom´ınio.
(e) Fa¸ca uma fun¸c˜ao que imprimir os dados do apartamento que tem o maior n´umero de
moradores


*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[15];
    int numero;
    float area;
    int moradores;
    float valor;
} Apartamento;


float areaTotal(Apartamento *apartamentos, int n) {
    int i;
    float area = 0;

    for (i = 0; i < n; i++) {
        area += apartamentos[i].area;
    }

    return area;
}

float totalArrecadado(Apartamento *apartamentos, int n) {
    int i;
    float total = 0;

    for (i = 0; i < n; i++) {
        total += apartamentos[i].valor;
    }

    return total;
}

void maiorNumeroMoradores(Apartamento *apartamentos, int n) {
    int i, maior = 0, index = 0;

    for (i = 0; i < n; i++) {
        if (apartamentos[i].moradores > maior) {
            maior = apartamentos[i].moradores;
            index = i;
        }
    }

    printf("Apartamento com maior numero de moradores:\n");
    printf("Nome: %s\n", apartamentos[index].nome);
    printf("Numero: %d\n", apartamentos[index].numero);
    printf("Area: %.2f\n", apartamentos[index].area);
    printf("Moradores: %d\n", apartamentos[index].moradores);
    printf("Valor: %.2f\n", apartamentos[index].valor);
}


int main(){
    Apartamento *apartamentos;
    int n, i;

    printf("Digite o numero de apartamentos: ");
    scanf("%d", &n);

    apartamentos = (Apartamento *) malloc(n * sizeof(Apartamento));

    for (i = 0; i < n; i++) {
        printf("Digite o nome do responsavel: ");
        scanf("%s", apartamentos[i].nome);

        printf("Digite o numero do apartamento: ");
        scanf("%d", &apartamentos[i].numero);

        printf("Digite a area do apartamento: ");
        scanf("%f", &apartamentos[i].area);

        printf("Digite o numero de moradores: ");
        scanf("%d", &apartamentos[i].moradores);

        printf("Digite o valor a ser pago no mes: ");
        scanf("%f", &apartamentos[i].valor);
    }

    printf("Area total do condominio: %.2f\n", areaTotal(apartamentos, n));
    printf("Total arrecadado do condominio: %.2f\n", totalArrecadado(apartamentos, n));
    maiorNumeroMoradores(apartamentos, n);

    free(apartamentos);

    return 0;
}
/* Seja um algoritmo para controlar os produtos do estoque de um supermercado. Para cada
produto, tem-se os seguintes campos:
 nome: string de tamanho 15
 setor: caracter
 quantidade: inteiro
 pre¸co: real //pre¸co por unidade do produto
(a) Escrever a defini¸c˜ao da estrutura produto.
(b) Declarar o vetor estoque do tipo da estrutura definida acima, de tamanho 10 (para testes)
(c) Fa¸ca a leitura dos produtos do supermercado
(d) Definir uma fun¸c˜ao que receba um setor e devolva o n´umero de produtos diferentes desse
setor
(e) Definir uma fun¸c˜ao que calcule e devolva o total de capital investido em produtos do
supermercado.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[15];
    char setor;
    int quantidade;
    float preco;
} Produto;

int produtosSetor(Produto *estoque, int n, char setor) {
    int i, count = 0;

    for (i = 0; i < n; i++) {
        if (estoque[i].setor == setor) {
            count++;
        }
    }

    return count;
}

float capitalInvestido(Produto *estoque, int n) {
    int i;
    float capital = 0;

    for (i = 0; i < n; i++) {
        capital += estoque[i].quantidade * estoque[i].preco;
    }

    return capital;
}

int main() {
    Produto *estoque;
    int n, i;
    char setor;

    printf("Digite o tamanho do estoque: ");
    scanf("%d", &n);

    estoque = (Produto *) malloc(n * sizeof(Produto));

    for (i = 0; i < n; i++) {
        printf("Digite o nome do produto: ");
        scanf("%s", estoque[i].nome);

        printf("Digite o setor do produto: ");
        scanf(" %c", &estoque[i].setor);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &estoque[i].quantidade);

        printf("Digite o preco do produto: ");
        scanf("%f", &estoque[i].preco);
    }

    printf("Digite o setor: ");
    scanf(" %c", &setor);

    printf("Produtos do setor %c: %d\n", setor, produtosSetor(estoque, n, setor));

    printf("Capital investido: %.2f\n", capitalInvestido(estoque, n));

    free(estoque);

    return 0;
}

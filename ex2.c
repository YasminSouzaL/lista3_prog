/*Faca um programa que calcule a m´edia aritm´etica dos valores lidos. Antes de ler os valores para
calcular a m´edia, pe¸ca para o usu´ario informar quantos valores ser˜ao lidos, e aloque dinamicamente um vetor com o tamanho exato necess´ario.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n, i;
    float media = 0;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    array = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
        media += array[i];
    }
    printf("\n");

    media = media / n;
    printf("Media: %.2f\n", media);

    free(array);

    return 0;
}
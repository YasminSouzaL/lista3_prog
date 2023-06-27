/*
Escreva um programa para armazenar em um array um certo n´umero de inteiros. O programa
dever´a come¸car por perguntar ao usu´ario o n´umero de inteiros a armazenar; dever´a em seguida
alocar dinamicamente um array de inteiros capaz de armazenar esse n´umero de inteiros; e por
fim dever´a lˆe-los do teclado e reescrevˆe-los na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n, i;

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
    }
    printf("\n");

    free(array);

    return 0;
}
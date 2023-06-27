/*Fa¸ca uma fun¸c˜ao recursiva que permita somar os elementos de um vetor de inteiros*/

#include <stdio.h>
#include <stdlib.h>

int soma(int *array, int n) {
    if (n == 0) {
        return 0;
    } else {
        return array[n - 1] + soma(array, n - 1);
    }
}

int main() {
    int *array, n, i;

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

    printf("Soma: %d\n", soma(array, n));

    free(array);

    return 0;
}
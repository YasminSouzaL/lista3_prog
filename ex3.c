/*Fa¸ca um programa em que o usu´ario ir´a digitar um tamanho n. Ap´os essa leitura ser˜ao declarados
dois vetores reais de tamanho n e realizada suas leituras. A ideia ´e que os valores lidos sejam
armazenados alternadamente em um terceiro vetor criado por vocˆe. Crie esse terceiro vetor,
armazene os valores alternadamente e o exiba no final do programa.
Ex: Para n = 4*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *array1, *array2, *array3;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    array1 = (float*) malloc(n * sizeof(float));
    array2 = (float*) malloc(n * sizeof(float));
    array3 = (float*) malloc(n * 2 * sizeof(float));

    printf("Digite os valores do primeiro array: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &array1[i]);
    }

    printf("Digite os valores do segundo array: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &array2[i]);
    }

    for (i = 0; i < n; i++) {
        array3[i * 2] = array1[i];
        array3[i * 2 + 1] = array2[i];
    }

    printf("O terceiro array eh: ");
    for (i = 0; i < n * 2; i++) {
        printf("%.2f ", array3[i]);
    }

    free(array1);
    free(array2);
    free(array3);
    return 0;
}

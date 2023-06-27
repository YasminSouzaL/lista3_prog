/*Fa¸ca um programa em que o usu´ario ir´a digitar um tamanho n. Ap´os essa leitura ser˜ao declarados
dois vetores reais de tamanho n e realizada suas leituras. A ideia ´e que os valores lidos sejam
armazenados alternadamente em um terceiro vetor criado por vocˆe. Crie esse terceiro vetor,
armazene os valores alternadamente e o exiba no final do programa.
Ex: Para n = 4*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    float *array1, *array2, *array3;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    array1 = (float *) malloc(n * sizeof(float));
    array2 = (float *) malloc(n * sizeof(float));
    array3 = (float *) malloc(n * sizeof(float));

    for (i = 0; i < n; i++) {
        printf("Digite o valor da posicao %d do array1: ", i);
        scanf("%f", &array1[i]);
    }

    for (i = 0; i < n; i++) {
        printf("Digite o valor da posicao %d do array2: ", i);
        scanf("%f", &array2[i]);
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            array3[i] = array1[i];
        } else {
            array3[i] = array2[i];
        }
    }

    printf("Array1: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", array1[i]);
    }
    printf("\n");

    printf("Array2: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", array2[i]);
    }
    printf("\n");

    printf("Array3: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", array3[i]);
    }
    printf("\n");

    free(array1);
    free(array2);
    free(array3);

    return 0;
}
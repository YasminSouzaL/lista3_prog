/*Implementar uma fun¸c˜ao recursiva para calcular a multiplica¸c˜ao de dois n´umeros inteiros (a, b),
por somas sucessivas.*/

#include <stdio.h>
#include <stdlib.h>

int mult(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + mult(a, b - 1);
    }
}

int main() {
    int a, b;

    printf("Digite o valor de A e b":);
    scanf("%d %d", &a, &b);

    printf("Multiplicacao de %d por %d: %d\n", a, b, mult(a, b));

    return 0;
}
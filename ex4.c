/*Crie uma fun¸c˜ao Recursiva para calcular o i-´esimo termo da sequˆencia de Fibonacci. A sequˆencia
de Fibonacci ´e dada por:
f ib(0) = 1
 f ib(1) = 1
 f ib(i) = f ib(i − 1) + f ib(i − 2)*/

#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Fibonacci de %d: %d\n", n, fib(n));

    return 0;
}
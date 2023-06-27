/* Crie uma fun¸c˜ao recursiva que receba um n´umero inteiro positivo N e calcule o somat´orio dos
n´umeros de 1 a N.
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + soma(n - 1);
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Soma de 1 a %d: %d\n", n, soma(n));

    return 0;
}
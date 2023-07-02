/*Fa¸ca um programa que receba do usu´ario um arquivo texto e um caracter. Mostre na tela
quantas vezes aquele caractere ocorre dentro do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char c, caracter;
    int count = 0;

    arq = fopen("arq.txt", "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    printf("Digite o caracter: ");
    scanf(" %c", &caracter); 

    while (!feof(arq)) {
        fscanf(arq, "%c", &c);
        if (c == caracter) {
            count++;
        }
    }

    printf("O caracter %c aparece %d vezes no arquivo\n", caracter, count);

    fclose(arq);

    return 0;
}
